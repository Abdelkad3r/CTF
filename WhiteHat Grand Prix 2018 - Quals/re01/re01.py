#!/usr/bin/env python
#WhiteHat Grand Prix 2018 Quals | Reverse Engineering [re01 - 100pts]
#@Abdelkader

from pwn import *

sys1 = open("WhiteHat_136_SYS.bin", "rb").read()
sys2 = open("WhiteHat_138_SYS1.bin", "rb").read()
sys3 = open("WhiteHat_139_SYS2.bin", "rb").read()
sys4 = open("WhiteHat_141_SYS.bin", "rb").read()
sys5 = open("WhiteHat_142_SYS.bin", "rb").read()

for key in range(48, 58):
	res1 = xor(sys1, key)
	res2 = xor(sys2, key)
	res3 = xor(sys3, key)
	res4 = xor(sys4, key)
	res5 = xor(sys5, key)
	open("res1_"+str(key)+".bin", "wb").write(res1)
	open("res2_"+str(key)+".bin", "wb").write(res2)
	open("res3_"+str(key)+".bin", "wb").write(res3)
	open("res4_"+str(key)+".bin", "wb").write(res4)
	open("res5_"+str(key)+".bin", "wb").write(res5)
