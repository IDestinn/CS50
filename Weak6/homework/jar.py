class Jar:
    def __init__(self, capacity=12):
        if (capacity >= 0):
            self.max = capacity
            self.jar = 0
        else:
            raise ValueError

    def __str__(self):
        if (self.jar > 0):
            return "🍪" * self.jar
        return "No cookies"

    def deposit(self, n):
        if (self.jar + n > self.max):
            raise ValueError
        self.jar += n

    def withdraw(self, n):
        if (self.jar - n < 0):
            raise ValueError
        self.jar -= n

    @property
    def capacity(self):
        return f"Capacity: {self.max}"

    @property
    def size(self):
        return f"{self.jar} Cookies inside"


def main():
    jar = Jar()
    print(str(jar.capacity))
    print(str(jar))
    jar.deposit(2)
    print(str(jar))
    jar.withdraw(1)
    print(str(jar))

main()
