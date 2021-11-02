#include <iostream>
using namespace std;

//This program counts digits of a number
int main()
{
	int number,counter=1;
	cout << "Enter a number: " << endl;
	cin >> number;

	if (number == 0)
		cout << "You have entered 0.";
	else
	{ 
		//For negative numbers
		if (number < 0)
		{
			number = -number;
		}
		while (number / 10 >= 1)
		{
			number /= 10;
			counter++;
		}

		cout << "This number has " << counter << " digits" << endl;

	}
		

	
	system("pause>0");
}
