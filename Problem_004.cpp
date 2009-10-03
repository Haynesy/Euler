#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

/**
	A palindromic number reads the same both ways. The largest palindrome made 
	from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.

	-isPalindrome func
	-min#: 100
	-max#: 999
**/
bool isPalindrome(int strPossiblePalindrome);
string toString(int numToConvert);

void prob_4(void)
{
	int minNo = 100;
	int maxNo = 999;
	int largestPalindrome = 0;
	int numCalc = 0;

	for(int i = minNo;i<= maxNo;i++)
	{
		for(int j = minNo;j<=maxNo;j++)
		{
			numCalc = i*j;
			
			if(isPalindrome(numCalc) && numCalc > largestPalindrome)
			{
				largestPalindrome = (int)numCalc;
				cout << largestPalindrome << endl;
			}
		}
	}
}

bool isPalindrome(int strPossiblePalindrome)
{
	// convert to string
	string testPalindrome = toString(strPossiblePalindrome);

	// check even set of numbers
	if (fmod((float)testPalindrome.length(), 2.0f) > 0) return false;
	
	// the center of the number
	int middle = (int)testPalindrome.length() / 2;
	
	// check if palindrome
	for(int i = 0;i<middle;i++)
		if(testPalindrome[i] != testPalindrome[testPalindrome.length()-(1+i)]) 
			return false;
	
	//cout << strPossiblePalindrome << endl;
	return true;
}

// Convert int to string
string toString(int numToConvert)
{
	stringstream strstream;
	string number;

	// convert using stream buffers
	strstream << numToConvert;
	strstream >> number;

	return number;
}