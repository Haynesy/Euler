#include <iostream>
#include <windows.h>

using namespace std;
/**
Find the largest prime factor of a composite number.

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
**/
bool isPrimeNumber(long long num);
bool isDevisable(long long numToDivide, long long numDivider);

void prob_3(void)
{
	
	long long number = 600851475143; //13195; // 600851475143
	
	for(long long i = 2;i<number;i++)
	{
		if(isDevisable(number, i) && isPrimeNumber(i))
		{
			cout << number << "/" << i << ": Devisable! Prime!" << endl;
		}
	}
}

bool isDevisable(long long numToDivide, long long numDivider)
{
	double mrDouble = 0;
	int mrInt = 0;

	mrDouble = (float)numToDivide / numDivider;
	mrInt = (int)mrDouble;
	mrDouble -= mrInt;

	return (mrDouble == 0);
}

bool isPrimeNumber(long long num)
{
	for(long long i = 2;i<num;i++)
	{
		double mrDouble = 0;
		int mrInt = 0;
		
		mrDouble = (double)num / i;
		mrInt = (int)mrDouble;
		mrDouble -= mrInt;
		
		if(mrDouble == 0)return false;
	}
	
	return true;
}