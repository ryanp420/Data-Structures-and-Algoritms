import random 

class RandomNumbers:
    def __init__ (self,range_of_numbers,amount_numbers):
        self.range_of_numbers = range_of_numbers
        self.amount_numbers = amount_numbers
        self.list = []


        for self.amount_numbers in range(self.amount_numbers): #creates a list of a set amount of numbers
            numbers_list = random.randrange(self.range_of_numbers) #generates random numbers 
            self.list.append(numbers_list) # takes random numbers and puts them into the list

    def get_list(self):
        return self.list 

   