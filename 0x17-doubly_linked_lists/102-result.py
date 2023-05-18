#!/usr/bin/python3
def palindrome(num1, num2):
    """Returns largest palindromic number."""

    """
    Returns largest palindromic number of
    products of numbers in range num1 to num2.
    """
    product = set()
    for i in range(num1, num2):
        for j in range(i, num2):
            if str(i * j) == str(i * j)[::-1]:
                product.add(i * j)
    return max(product)


print(palindrome(1000, 10000))
print(palindrome(100, 1000))
print(palindrome(10, 100))
print(palindrome(1, 10))
