0x03-python-data_structures

| File                               | Prototype                                      |
| ---------------------------------- | ---------------------------------------------- |
| `0-print_list_integer.py`          | `def print_list_integer(my_list=[]):`          |
| `1-element_at.py`                  | `def element_at(my_list, idx):`                |
| `2-replace_in_list.py`             | `def replace_in_list(my_list, idx, element):`  |
| `3-print_reversed_list_integer.py` | `def print_reversed_list_integer(my_list=[]):` |
| `4-new_in_list.py`                 | `def new_in_list(my_list, idx, element):`      |
| `5-no_c.py`                        | `def no_c(my_string):`                         |
| `6-print_matrix_integer.py`        | `def print_matrix_integer(matrix=[[]]):`       |
| `7-add_tuple.py`                   | `def add_tuple(tuple_a=(), tuple_b=()):`       |
| `8-multiple_returns.py`            | `def multiple_returns(sentence):`              |
| `9-max_integer.py`                 | `def max_integer(my_list=[]):`                 |
| `10-divisible_by_2.py`             | `def divisible_by_2(my_list=[]):`              |
| `11-delete_at.py`                  | `def delete_at(my_list=[], idx=0):`            |
| `100-print_python_list_info.c`     | `void print_python_list_info(PyObject *p);`    |

0. Print a list of integers
Write a function that prints all integers of a list.
not allowed to import any module or to cast integers into strings
use str.format() to print integers

1. Secure access to an element in a list
Write a function that retrieves an element from a list like in C.
not allowed to import any module or use try/except
If idx is negative, the function should return None
If idx is out of range (> of number of element in my_list), the function should return None

2. Replace element
Write a function that replaces an element of a list at a specific position (like in C).
not allowed to import any module or use try/except
If idx is negative, the function should not modify anything, and returns the original list
If idx is out of range (> of number of element in my_list), the function should not modify anything,

3. Print a list of integers... in reverse!
Write a function that prints all integers of a list, in reverse order
not allowed to import any module or to cast integers into strings
 use str.format() to print integers

4. Replace in a copy
Write a function that replaces an element in a list at a specific position without modifying the original list (like in C).
not allowed to import any module or use try/except
If idx is negative, the function should return None
If idx is out of range (> of number of element in my_list), the function should return Non

5. Can you C me now?
Write a function that removes all characters c and C from a string.
not allowed to import any module or use try/replace

6. Lists of lists = Matrix
not allowed to import any module or to cast integers into strings
 use str.format() to print integers


7. Tuples addition
Write a function that adds 2 tuples.
Returns a tuple with 2 integers:
The first element should be the addition of the first element of each argument
The second element should be the addition of the second element of each argument
 not allowed to import any module
If a tuple is smaller than 2, use the value 0 for each missing integer
If a tuple is bigger than 2, use only the first 2 integers

8. More returns!
Write a function that returns a tuple with the length of a string and its first character.
If the sentence is empty, the first character should be equal to None
You are not allowed to import any module

9. Find the max
Write a function that finds the biggest integer of a list.
not allowed to import any module or not allowed to import any module

10. Only by 2
Write a function that finds all multiples of 2 in a list.
Return a new list with True or False, depending on whether the integer at the same position in the original list is a multiple of 2

11. Delete at
Write a function that deletes the item at a specific position in a list.
not allowed to use pop()

12. Switch
Complete the source code in order to switch value of a and b
Your code should be inserted where the comment is (line 4)
Your program should be exactly 5 lines long

13. Linked list palindrome
Write a function in C that checks if a singly linked list is a palindrome.
Return: 0 if it is not a palindrome, 1 if it is a palindrome
An empty list is considered a palindrome

14. CPython #0: Python lists
#advanced
Create a C function that prints some basic info about Python lists.
Python version: 3.4
Your shared library will be compiled with this command line: gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -Wl,-soname,PyList -o libPyList.so -fPIC -I/usr/include/python3.4 100-print_python_list_info.c
OS: Ubuntu 14.04 LTS
Start by reading:
listobject.h
object.h
Common Object Structures
List Objects
