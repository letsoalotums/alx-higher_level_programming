#!/usr/bin/python3

def magic_calculation(a, b):
	"""function to match bytecode provided by Holberton School."""
        from magic_calculation_102 import add, sub

    c = a ** b
    c += b
    c *= a
    c = c >> 2
    c = ~c
    return c
