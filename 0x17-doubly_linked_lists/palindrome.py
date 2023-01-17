#!/usr/bin/python3
list_of_nums = []
list_of_rev =[]
for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        number = i * j
        list_of_nums += [number]
        rev = 0
        n = 0
        while number // 10:
            rev += (number % 10) * (10 ** n)
            n += 1
            number = number // 10
        list_of_rev += [rev]


for i in range(0, len(list_of_nums)):
    if list_of_nums[i] == list_of_rev[i]:
        print(list_of_rev[i])
