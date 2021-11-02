#include <iostream>
using namespace std;

// Program to calculate how many days does a certain month of a certain year have
//(year % 4 == 0 for february to have 29 days)
int main()
{
	cout << "Please enter the month and the year." << endl;
	int month, year;
	cin >> month >> year;
	switch (month)
	{
	case 2: (year % 4 == 0) ?
		cout << "29 days" : cout << "28 days"; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << "30 days"; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "31 days."; break;
	default:
		cout << "Invalid month"; break;
	}
	
	

	system("pause>0");
}