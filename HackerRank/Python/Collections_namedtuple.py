from collections import namedtuple

n = int(input())

columns = input().split()
Student = namedtuple("Student", columns)

total = 0

for i in range(n):
    data = input().split()
    student = Student(*data)
    total += int(student.MARKS)

average = total / n

print(f"{average:.2f}")