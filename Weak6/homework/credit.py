while True:
    card_number = input("Введите номер карты: ")

    if card_number.isdigit():
        break

if len(card_number) != 16:
    print("Это ненастоящая карта!")

sum_of_check = 0

for digit in card_number[::2]:
    digit = int(digit)
    if digit * 2 > 9:
        sum_of_check += 1 + (digit * 2) % 10
    else:
        sum_of_check += digit * 2

for digit in card_number[1::2]:
    digit = int(digit)
    sum_of_check += digit

print(sum_of_check)

if sum_of_check % 10 != 0:
    print("Это карта ненастоящая!")
    quit(0)

if card_number[0] == "4":
    print("Эта карта настоящая\nVISA")
    quit(0)

if card_number[0] == "3" and card_number[1] in ["4", "7"]:
    print("Эта карта настоящая\nAMES")
    quit(0)

if card_number[0] == "5" and card_number[1] in ["1", "2", "3", "4", "5"]:
    print("Эта карта настоящая\nMASTERCARD")
    quit(0)

print("Это карта не настоящая!")
quit(0)