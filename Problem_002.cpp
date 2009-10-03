#include <iostream>

using namespace std;
/**
	Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
	By starting with 1 and 2, the first 10 terms will be:

	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

	Find the sum of all the even-valued terms in the sequence which do not exceed four 
	million.

**/
void prob_2(void)
{
	int oldNumber = 1;
	int holder = 0;
	int newNumber = 1;
	int sum = 0;

	do
	{
		//cout << newNumber << ", ";
		if(newNumber%2 == 0) sum += newNumber;
		
		holder = newNumber;
		newNumber += oldNumber;
		oldNumber = holder;
	}while(newNumber <= 4000000);

	cout << endl << sum << endl << endl;
}