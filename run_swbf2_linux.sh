#!/bin/sh
set -eu

fail() {
    printf '%s\n' "$1" >&2
    exit 1
}

script_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd -P)
if [ -n "${SWBF2_GAME_DIR:-}" ]; then
    game_dir=$SWBF2_GAME_DIR
elif [ -f "$script_dir/swbf2_recomp.exe" ]; then
    game_dir=$script_dir
else
    game_dir=$script_dir/bf2_recomp/game_files
fi

game_dir=$(CDPATH= cd -- "$game_dir" && pwd -P) || fail 'Game directory is missing. Set SWBF2_GAME_DIR to your installation directory.'
game_exe=$game_dir/swbf2_recomp.exe
[ -f "$game_exe" ] || fail "Missing $game_exe. Copy the x64 Windows build into the game directory."
[ -f "$game_dir/default.xbe" ] || fail "Missing $game_dir/default.xbe. Extract your Xbox disc files into the game directory."

runner=${SWBF2_LINUX_RUNNER:-auto}
if [ "$runner" = auto ]; then
    if command -v umu-run >/dev/null 2>&1; then
        runner=umu
    else
        runner=wine
    fi
fi

case "$runner" in
    umu) command_name=umu-run ;;
    wine) command_name=wine ;;
    *) fail 'SWBF2_LINUX_RUNNER must be auto, umu, or wine.' ;;
esac
command -v "$command_name" >/dev/null 2>&1 || fail "Could not find $command_name. Use Steam with Proton or install $command_name."

# Give each runner a separate default prefix and respect an explicit prefix.
if [ -z "${WINEPREFIX:-}" ]; then
    data_dir=${XDG_DATA_HOME:-$HOME/.local/share}
    WINEPREFIX=$data_dir/swbf2-recomp/$runner
fi
case "$WINEPREFIX" in
    /*) ;;
    *) fail 'WINEPREFIX must be an absolute path.' ;;
esac
mkdir -p -- "$(dirname -- "$WINEPREFIX")"
export WINEPREFIX

cd -- "$game_dir"
exec "$command_name" "$game_exe" "$@"
