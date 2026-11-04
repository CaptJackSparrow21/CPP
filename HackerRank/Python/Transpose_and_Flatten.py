import numpy as np

n, m = map(int, input().split())

arr = np.array([input().split() for _ in range(n)], dtype = int)

print(np.transpose(arr))
print(arr.flatten())