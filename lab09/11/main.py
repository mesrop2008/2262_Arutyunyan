def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper

@toint
def add(a, b):
    return a + b

@toint
def product(a, b, c):
    return a * b * c

def hypot(x, y):
    return (x**2 + y**2) ** 0.5

calc_hypot = toint(hypot)

print(add("10", "20"))
print(product("2", "3", "4"))
print(calc_hypot("3", "4"))
