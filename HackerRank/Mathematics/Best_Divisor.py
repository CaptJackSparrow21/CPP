def digit_sum(x) :
    total = 0
    while x > 0 :
        total += x % 10
        x //= 10
    return total

n = int(input())
best = 1

for i in range(1, n + 1) :
    if n % i == 0 :
        if (digit_sum(i) > digit_sum(best) or
            (digit_sum(i) == digit_sum(best) and i < best)) :
            best = i

print(best)
