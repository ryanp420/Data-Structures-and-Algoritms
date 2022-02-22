# trying to making recursion into OOP style
# TODO:

from sys import exit


class RecursionMethods:
    def __init__(self):
        pass

    def recursionSum(self, start, end):
        self.start = start
        self.end = end
        try:
            if start == end:
                return start
            else:
                return start + self.recursionSum(start + 1, end)
        except RecursionError:
            print("Start cannot be larger than end. Try again")
            exit()

    def recursionFactorial(self, start):
        self.start = start
        if start == 1:
            return start
        else:
            return start * self.recursionFactorial(start - 1)


def main():
    obj1 = RecursionMethods()

    choice = 1
    while choice != 0:
        print("Sum of numbers from START to END: \n")
        start = eval(input("Enter start: "))
        end = eval(input("Enter end: "))
        print(obj1.recursionSum(start, end), "\n")

        print("Factorial of a number: ")
        factorial = eval(input("Enter number to factorial: \n"))
        print(obj1.recursionFactorial(factorial))

        choice = eval(input("Continue: 0. No, 1.Yes \n"))


if __name__ == "__main__":
    main()
