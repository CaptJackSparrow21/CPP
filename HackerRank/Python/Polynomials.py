import numpy as np
coeff = np.array(list(map(float, input().split())))
x = float(input())
print(np.polyval(coeff, x))