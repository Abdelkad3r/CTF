#!/usr/bin/env python
#WhiteHat Grand Prix Quals 2018 | Reverse Engineering [re06 - 100pts]
#@Abdelkader

import base64
import struct

n = 41117
e = 9157
c = "iB6WcuCG3nq+fZkoGgneegMtA5SRRL9yH0vUeN56FgbikZFE1HhTM9R4tZPghhYGFgbUeHB4tEKRRNR4Ymu0OwljQwmRRNR4jWBweOKRRyCRRAljLGQ="
c = base64.b64decode(c)
#print c

#public static int mod(int m, int e, int n)
def mod(m, e, n):
	arr = []
	num = 0
	num2 = 1
	while e > 0:
		arr.append(e % 2)
		num = num + 1
		e /= 2

	for i in range(num-1, -1, -1):
		num2 = num2 * num2 % n
		flag = (arr[i] == 1)
		if flag:
			num2 = num2 * m % n

	return num2

#decryption
flag = ""
for i in range(0, len(c), 2):
	for m in range(255):
		num2 = struct.unpack("H", c[i:i+2])[0]
		if mod(m, e, n) == num2:
			print "Yay ..."
			flag += chr(m)
print flag
