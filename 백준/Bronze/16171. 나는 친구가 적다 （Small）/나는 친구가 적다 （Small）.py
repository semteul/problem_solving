a = input()
b = input()
a = ''.join(list(filter(lambda u: u.isalpha(),list(a))))
print(1) if b in a else print(0)