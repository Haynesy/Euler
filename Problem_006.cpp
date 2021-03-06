#include <iostream>

using namespace std;
/**
	The sum of the squares of the first ten natural numbers is,
	1^(2) + 2^(2) + ... + 10^(2) = 385

	The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^(2) = 55^(2) = 3025

	Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

**/
long square(long number);
long sumOfSquare(long first, long last);
long squareOfSum(long first, long last);

void prob_6(void)
{
	long min = 1;
	long max = 100;

	cout << squareOfSum(min, max) - sumOfSquare(min, max) << endl;
}

long square(long number)
{
	return number * number;
}

long sumOfSquare(long first, long last)
{
	long total = 0;
	for(int i = first;i <= last; i++)
		total += square(i);

	cout << "- sumOfSquare" << endl;
	return total;
}

long squareOfSum(long first, long last)
{
	long total = 0;
	for(int i = first;i <= last; i++)
		total += i;
	
	cout << "- squareOfSum" << endl;
	return square(total);
}