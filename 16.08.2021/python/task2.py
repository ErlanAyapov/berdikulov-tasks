import math


print('a, b, c енгіз (пробел арқылы)')

arr = list(map(int, input().split())) 

p = (arr[0] + arr[1] + arr[2]) / 2

print(f'p = {p}')
s = math.sqrt(p * (p - arr[0]) * (p - arr[1]) * (p - arr[2]))

print(f's = {s}')