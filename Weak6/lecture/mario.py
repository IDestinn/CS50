while True:
    height = input("Height: ")
    if height.isdigit() and 0 <= int(height) <= 8:
        height = int(height)
        break

for i in range(height + 1):
    print(" " * (height - i) + "#" * i + "  " + "#" * i)