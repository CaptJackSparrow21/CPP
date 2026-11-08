import numpy as np
n, m = map(int, input().split())

a = np.array([input().split() for _ in range(n)], dtype = int)
b = np.array([input().split() for _ in range(n)], dtype = int)

print(a + b)
print(a - b)
print(a * b)
print(a // b)
print(a % b)
print(a ** b)
