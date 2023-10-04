#!/usr/bin/python3
# 12-fizzbuzz.py


def fizzbuzz():
	"""Printing the numbers from 1 to 100 separating each by a space.


	print just Fizz For multiples of three
	buzz for multiples of five, 
	print FizzBuzz instead of the number, for multiples of both
	"""
	for number in range(1, 101):
		if number % 3 == 0 and number % 5 == 0:
			print("FizzBuzz ", end="")
		elif number % 3 == 0:
			print("Fizz ", end="")
		elif number % 5 == 0:
			print("Buzz ", end="")
		else:
			print("{} ".format(number), end="")
