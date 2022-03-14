
import time 
from datastructures import RecursionMethods
from datastructures import RandomNumbers


begin = time.time()

def main():
    
    #random number list generation 
    obj2 = RandomNumbers(100,10)
    print(obj2.get_list()) 
    time.sleep(2)


    #Recursion 
    obj1 = RecursionMethods()
    choice = 0
    while choice != 0: 
        print("Sum of numbers from START to END: \n")
        start = eval(input("Enter start: "))
        end = eval(input("Enter end: "))
        print(obj1.recursionSum(start, end), "\n")

        print("Factorial of a number: ")
        factorial = eval(input("Enter number to factorial: \n"))
        print(obj1.recursionFactorial(factorial))

        choice = eval(input("Continue: 0. No, 1.Yes \n"))
    
    end = time.time()
    print("Time : ", round(end-begin,5), "seconds")  



if __name__ == '__main__':
    main() 