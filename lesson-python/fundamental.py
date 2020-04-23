'''
message = "hello world"
lol = ["aku","sayang","kamu"]
usia = 15
lingkar_perut = 20.5

print(message)
print usia
print lingkar_perut

for i in range(2,3):
    print(message)

while usia > 0:
    print("usia saat ini : %s" % usia)
    print("masih idup!")
    usia = usia -1

lol.append('loh') #masukin value ke array
lol.append('beb')
print(lol)

for i in lol:
    print('var a : %s var message : %s' % (i,message))
'''

manusia = {}
manusia["nama"] = "nyoman"
manusia["umur"] = 19
manusia["status"] = "jomblo"
print(manusia)
manusia["angka"] = 1
print(manusia)

import json
print(json.dumps(manusia))
