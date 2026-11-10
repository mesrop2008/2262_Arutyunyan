def rev(x):
    return x[::-1]

tail_len = 3
def tail(x):
    return x[-tail_len:]

print(rev([1, 2, 3]))
print(tail([1, 2, 3, 4, 5]))
