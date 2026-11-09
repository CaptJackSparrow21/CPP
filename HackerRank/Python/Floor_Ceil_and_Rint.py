import numpy as np
np.set_printoptions(legacy = '1.13')

a = np.array(input().split(), dtype = float)

print(np.floor(a))
print(np.ceil(a))
print(np.rint(a))