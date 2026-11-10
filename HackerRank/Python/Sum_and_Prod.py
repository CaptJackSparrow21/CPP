import numpy as np
n, m = map(int, input().split())
arr = np.array([input().split() for _ in range(n)], dtype = int)
result = np.sum(arr, axis = 0)
print(np.prod(result))