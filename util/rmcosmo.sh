#!/bin/sh
# -*- coding: utf-8 -*-

echo -n 'Removing the Cosmopolitan downloads and binaries... ' >/dev/stderr;
rm -f etc/cosmo.zip;
rm -rf etc/cosmo;
echo 'done.' >/dev/stderr;

exit 0;
