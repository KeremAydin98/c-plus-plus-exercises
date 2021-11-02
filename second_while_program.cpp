#include <iostream>
using namespace std;

//The objective of the program is reversing a number
int main()
{
	int number, reversednumber = 0;
	cout << "Enter a number."<<endl;
	cin >> number;

	while (number != 0)
	{
		reversednumber *= 10;
		int lastDigit = number % 10;
		reversednumber += lastDigit;

		number /= 10;

	}
	cout << "Reversed number is " << reversednumber;
	system("pause>0");
}