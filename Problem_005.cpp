#include <iostream>
#include <math.h>

using namespace std;
/**
	2520 is the smallest number that can be divided by each of the numbers from 
	1 to 10 without any remainder.

	What is the smallest number that is evenly divisible by all of the numbers 
	from 1 to 20?
**/
bool isDevisableNumber(float enumerator, float minDenominator, float maxDenominator);

void prob_5(void)
{
	long i = 1;
	bool numberFound = false;

	do
	{
		i++;
		numberFound = isDevisableNumber((float)i, 1, 20);
	}while(!numberFound);
}

bool isDevisableNumber(float enumerator, float minDenominator, float maxDenominator)
{
	for(float i = minDenominator; i<=maxDenominator;i++)
		if (fmod(enumerator, i) > 0) return false;

	cout << "Smallest No: " << (long)enumerator << endl;
	return true;
}