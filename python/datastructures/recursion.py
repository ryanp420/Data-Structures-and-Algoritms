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

