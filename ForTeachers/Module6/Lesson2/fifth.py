A = {'ac':'ba', 'aa':'aa', 'bb':'bb', 'ba':'ab'}

key = 'ac'
if key in A:
    del A[key]

try:
    del A[key]
except KeyError:
    print('Здесь нет такого элемента')
print(A)