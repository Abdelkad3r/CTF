#!/usr/bin/env python
#WhiteHat Grand Prix 2018 – Quals | misc [misc02 - 100pts] /DECRYPT.py
#@Abdelkader

import struct
import sys
import base64

password_enc = 'JTd1XyoIbmc3PWhpOjhfVhsIbmcAAAAA'

output = base64.b64decode(password_enc)
print(output)

blocks = struct.unpack('I' * (len(output) / 4), output)
print(blocks)

result = []
for block in blocks:
	result += [block ^ block >> 16]
print(result)

passphrase = ""
for block in result:
	passphrase += struct.pack('I', block)
print("The PGP Passphrase is: ", passphrase.strip("\x00"))
