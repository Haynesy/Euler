/**
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that 
	the 6^(th) prime is 13.

	What is the 10001^(st) prime number?

**/

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

bool isPrimeNumber(long long num);

void prob_7(void)
{
	bool numFound = false;
	long number = 1;
	int count = 0;
	do
	{
		number++;
		if(isPrimeNumber(number))
		{
			count++;
			cout << count << ": " << number << endl;
			//Sleep(100);
		}
	}while(count != 10001); //10001
}