/* 
 * Euler Project - Problem 2
 *
 * Each new term in the Fibonacci sequence is generated by adding the previous 
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not 
 * exceed four million, find the sum of the even-valued terms (can be divided
 * by 2!).
 *
 * Answer: 4613732
 * Source: https://projecteuler.net/problem=2
 * Code by: Domen Stropnik
 */

#include <iostream>

int main()
{
	int n = 0;
	int n1 = 1;
	int n2 = 2;
	int sum = 2;

	int value = 0;
	std::cout << "Insert the value to receive the sum of the Fibonacci "
		<< "sequence, that does not exceed this value: ";
	std::cin >> value;

	while (n < value)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;

		if (n % 2 == 0)
			sum += n;
	}

	std::cout << "The sum is: " << sum << std::endl;
	
	return 0;
}
