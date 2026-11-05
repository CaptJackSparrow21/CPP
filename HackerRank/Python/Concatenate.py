import numpy as np
n, m, p = map(int, input().split())
A = np.array([input().split() for _ in range(n)], dtype = int)
B = np.array([input().split() for _ in range(m)], dtype = int)

result = np.concatenate((A, B), axis = 0)

print(result)