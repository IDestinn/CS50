import sys
import random
from pyfiglet import Figlet

if len(sys.argv) not in [1, 3]:
    print("Type 1 or 0 arguments")
    sys.exit(1)

figlet = Figlet()
if len(sys.argv) == 3:
    if sys.argv[1] not in ["-f", "--font"]:
        print("First argument need to be -f or --font")
        sys.exit(1)

    if sys.argv[2] not in figlet.getFonts():
        print("This font doesn't exist")
        sys.exit(1)
    
    figlet.setFont(font = sys.argv[2])
else:
    figlet.setFont(font = random.choice(figlet.getFonts()))

input_str = input("Input: ")
print("Output: ")
print(figlet.renderText(input_str))