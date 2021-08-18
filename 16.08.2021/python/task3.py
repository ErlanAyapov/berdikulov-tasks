'''

Мынаны ручной өзім жаздым

array = []
x = ''
n = input('Сан енгіз: ')

length = len(str(n))

for i in range(0, int(length)):
	array.append(str(n[i]))

d = array.pop(0)
array.append(d)

for j in range(0, int(length)):
	x += str(array[j])

print(f'------- | {x}')
'''


# Мынау пайтоннын өзінің дайын оперторы
a = input('Сан енгіз: ')
print(a[1:] + a[:1])