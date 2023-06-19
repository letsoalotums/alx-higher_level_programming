#!/usr/bin/python3

if __name__ == "__main__":

    a = 10
    b = 5

    from calculator_1 import add, subtract, multiply, divide

    result1 = add(a, b)
    result2 = subtract(a, b)
    result3 = multiply(a, b)
    result4 = divide(a, b)

    output = "Addition result: {}\nSubtraction result: {}\nMultiplication result: {}\nDivision result: {}".format(
    result1, result2, result3, result4
    )
    
    print(output)
