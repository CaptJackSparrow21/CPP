n, x = map(int, input().split())

marks = [list(map(float, input().split())) for _ in range(x)]

for student in zip(*marks) :
    print(sum(student) / x)