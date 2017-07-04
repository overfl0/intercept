#!/bin/bash

export PATH=$PATH:/opt/mxe/usr/bin

if [ -f /opt/mxe/usr/bin/i686-w64-mingw32.static.posix-cmake ]
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
make -j 3 MXE_PLUGIN_DIRS=plugins/gcc7 MXE_TARGETS='x86_64-w64-mingw32.static.posix' gcc
#cat /opt/mxe/log/gcc_i686-w64-mingw32.static.posix | curl -F 'sprunge=<-' http://sprunge.us
cat /opt/mxe/log/gcc_x86_64-w64-mingw32.static.posix | curl -F 'sprunge=<-' http://sprunge.us
ls -l /opt/mxe/usr/bin/
popd
