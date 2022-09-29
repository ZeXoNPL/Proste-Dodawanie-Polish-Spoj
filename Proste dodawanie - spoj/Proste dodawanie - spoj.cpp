//This code was prepare for pl.spoj.com
//Problem ID 549
//This code was approved by judge in 29.09.2022 7:14 PM 

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int tests;				//How many calculation program have to do
	int number_of_cases;	//How many number program have to calculate
	int number;				//Variable for storage a number 
	int result[100];		//Array for result
	cin >> tests;

	//First loop for many calculate
	for (int i = 0; i <= tests; i++)
	{
		cin >> number_of_cases;
		//Second loop for number
		for (int j = 0; j < number_of_cases; j++)
		{
			//Adding to variable for use to array "result"
			cin >> number;
			//Adding to an existing array 
			result[i] += number;
		}
		//Checker for final loop
		if (i == tests)
		{
			//Showing a result 
			for (int k = 0; k < tests; k++)
			{
				cout << result[k];
				cout << endl;
			}
		}
	}
	return 0;
}
