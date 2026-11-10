def every_other(seq):
    flag = True
    for item in seq:
        if flag:
            yield item
        flag = not flag

print(*every_other([10, 20, 30, 40, 50]))
print(*every_other(range(10)))
print(*every_other(iter(range(10))))
print(sum(every_other(map(int, input().split()))))
