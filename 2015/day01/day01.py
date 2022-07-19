floor = 0
flag = True
s = input()

for i, c in enumerate(s, start=1):
    if c == "(":
        floor += 1
    else:
        floor -= 1
    if floor == -1 and flag:
        print(i)  # part 2
        flag = False

print(floor)  # part1