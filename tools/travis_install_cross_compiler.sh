#!/bin/bash

CROSS_COMPILER_PATH=/opt/mxe/usr/bin
export PATH="$PATH:${CROSS_COMPILER_PATH}"

CROSS_COMPILER_PRESENT=true
for f in \
    "${CROSS_COMPILER_PATH}/i686-w64-mingw32.static.posix-cmake" \
    "${CROSS_COMPILER_PATH}/i686-w64-mingw32.static.posix-gcc" \
    "${CROSS_COMPILER_PATH}/i686-w64-mingw32.static.posix-g++" \
    "${CROSS_COMPILER_PATH}/x86_64-w64-mingw32.static.posix-cmake" \
    "${CROSS_COMPILER_PATH}/x86_64-w64-mingw32.static.posix-gcc" \
    "${CROSS_COMPILER_PATH}/x86_64-w64-mingw32.static.posix-g++"
do
    if [ ! -f "$f" ]
    then
        CROSS_COMPILER_PRESENT=false
    fi
done

if [ $CROSS_COMPILER_PRESENT == true ]
then
    echo "Cross-compiler found, continuing..."
    exit 0
fi

echo "###################################################################################################";
echo "No cross-compiler found in the cached directory. Building it using MXE. This will take a long time!";
echo "###################################################################################################";

mkdir -p /opt
rm -rf /opt/mxe
git clone https://github.com/overfl0/mxe /opt/mxe
pushd /opt/mxe

echo "Building..."
make -j 3 MXE_PLUGIN_DIRS=plugins/gcc7 MXE_TARGETS='x86_64-w64-mingw32.static.posix i686-w64-mingw32.static.posix' gcc

ls -l /opt/mxe/usr/bin/
popd
