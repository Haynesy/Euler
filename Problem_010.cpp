/**
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

	Find the sum of all the primes below two million.
**/
#include <iostream>
#include <math.h>

using namespace std;

void prob_10(void)
{
	long long sum = 0;
	bool prime = true;
	int target = 2000000;

	for(long i = 3;i<target;i++)
	{
		if(i%2==0)continue;
		
		prime = true;
		for(long long j = 2;j<i;j++)
		{
			if(fmod((double)i, (double)j) == 0)
			{
				prime = false;
				break;
			}
		}
		
		if(prime)
		{
			sum += i;
			cout << i << ", ";
		}
	}

	sum += 2;
	cout << endl << sum << endl;
}

