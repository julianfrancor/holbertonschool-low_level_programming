#!/usr/bin/python3

# you have to download uncompyle6 and then do this:
# cp crackme4 crackme4.pyc
# uncompyle6 crackme4.pyc

# and then you get this text to find out the  password

# uncompyle6 version 3.6.7
# Python bytecode 3.4 (3310)
# Decompiled from: Python 2.7.6 (default, Nov 13 2018, 12:45:42) 
# [GCC 4.8.4]
# Warning: this version has problems handling the Python 3 "byte" type in constants properly.

# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-06 00:44:37
# Size of source mod 2**32: 195 bytes
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
print(ok)
# okay decompiling crackme4.pyc
