lst = ['hello', 'hell', 'bye', 'world', 'babye']
lst.sort(key=lambda s: (len(s), s))
print(lst)
