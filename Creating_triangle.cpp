#include <iostream>
#include <iomanip>//for setw function
using namespace std;


//Creating a triangle shape 
void main()
{
	int height;
	char symbol;
	cout << "Enter height: " << endl;
	cin >> height;
	cout << "Enter symbol: " << endl;
	cin >> symbol;

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= i; j++)
			{
				cout << setw(2) << symbol;//setw(2) puts size two space.
			}
		
		cout << endl;
	}

	system("pause>0");
}