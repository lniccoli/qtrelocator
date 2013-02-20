qtrelocator
===========

A small command line program snitched from the QT installer to relocate a windows QT installation

Since QT hardwires absolute paths in libaries and executables, it is not possible to simply move a QT directory once the source has been built.
The binary installer works around this patching binaries and configuration files on the fly.
This utility uses the same code to move an already build QT directory.
