prices = {
    "baja taco": 4.00,
    "burrito": 7.50,
    "bowl": 8.50,
    "nachos": 11.00,
    "quesadilla": 8.50,
    "super burrito": 8.50,
    "super quesadilla": 9.50,
    "taco": 3.00,
    "tortilla salad": 8.00
}

total_price = 0
while True:
    order = input("Item: ").lower()
    if order in prices:
        total_price += prices.get(order)
        print(f"Total: ${total_price}")
    elif order == "":
        quit()

    