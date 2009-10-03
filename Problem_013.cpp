/**
	Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
**/
#include <iostream>
#include <fstream>

using namespace std;

void prob_13(void)
{
	int numArray[50][100] = {0};
	int answerArray[50] = {0};
	int x = 0;
	int y = 0;
	int sum = 0;
	int carryOver = 0;


	// Open file to read
	ifstream OpenFile("problem13.txt");
	char ch;
	
	do
	{
		OpenFile.get(ch);
		
		if(ch == '\n')
		{
			y++;
			x=0;
		}
		else 
		{
			numArray[x][y] = (int)ch - (int)'0';
			x++;
		}
		
	}while(!OpenFile.eof());
	OpenFile.close();

	// output the array filled from file
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<50;j++)
		{
			//cout << numArray[j][i];
		}
		//cout << endl;
	}
	cout << endl << endl;

	// Add all numbers together and put in the answer array
	for(int j=49;j>=0;j--)
	{
		sum = 0;
		for(int k = 0;k<100;k++)
		{
			sum += numArray[j][k];
			cout << numArray[j][k];
		}
		cout << endl;
		if(j != 0)
		{
			answerArray[j] = (sum + carryOver)%10;
			carryOver = (sum - ((sum + carryOver)%10))/10;
		}
		else
		{
			answerArray[j]= sum;
		}
		cout << "answerArray: " << answerArray[j] << endl;
		cout << "carryOver: "<< carryOver << endl << endl;
		//system("pause");
	}
	
	// Final answer
	cout << endl << "Answer: ";
	for(int i=0;i<=49;i++) cout << answerArray[i];
	cout << endl << endl;
}