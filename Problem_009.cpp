/**
	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^(2) + b^(2) = c^(2)

	For example, 3^(2) + 4^(2) = 9 + 16 = 25 = 5^(2).

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
**/

#include <iostream>

using namespace std;

bool isPythagoreanTriplet(int adjacent, int opposite, int hypotenuse);
long square(long number);

void prob_9(void)
{
	for(int adj = 0; adj <= 1000; adj++)
	{
		for(int opp = 0; opp <= 1000; opp++)
		{
			for(int hyp = 0; hyp <= 1000; hyp++)
			{
				if(!isPythagoreanTriplet(adj, opp, hyp)) continue;
				if(adj + opp + hyp == 1000) cout << endl << adj << " + " << opp << " + " << hyp << " = 1000" << endl;
			}
		}
	}
}

bool isPythagoreanTriplet(int adjacent, int opposite, int hypotenuse)
{
	if(!(adjacent < opposite)) return false;
	if(!(opposite < hypotenuse)) return false;
	return static_cast<bool>((square(adjacent) + square(opposite)) == square(hypotenuse));
}

