from itertools import groupby
s = input()
for digit, group in groupby(s) :
    print((len(list(group)), int(digit)), end = " ")