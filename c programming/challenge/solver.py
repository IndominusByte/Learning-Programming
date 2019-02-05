from pwn import *
from random import randint

inputan = randint(0,20)
r = process("./guess")

for i in range(7):
    try:
        check = r.recv()
        print check
        r.sendline(str(inputan))
    except:
        EOFError
        pass

