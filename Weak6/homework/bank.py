greeting = input("Greeting: ")
price = 100

greeting = greeting.strip()
greeting = greeting.lower()

if greeting[0] == "h":
    price -= 80

if "hello" in greeting[0:5]:
    price = 0

print("$" + str(price))