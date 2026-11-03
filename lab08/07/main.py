numbers = [int(x) for x in input().split()]
for x in numbers:
    if x < 0:
        print(x)
        break
else:
    print("all non-negative")
