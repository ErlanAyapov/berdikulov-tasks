'''

# Мынаны ручной өзім жаздым

array = []
x = ''
n = input('Сан енгіз: ')

length = len(str(n))

for i in range(0, int(length)):
	array.append(str(n[i]))

for i in range(int(length) -1, -1, -1):
	x = x + array[i]

print(x)

'''

# Мынау пайтоннын өзінің дайын оперторы
a = input('Enter: ')
print(a[::-1])