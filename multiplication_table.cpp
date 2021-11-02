#include <iostream>
using namespace std;


//Multiplication table

void main()
{
	int multi;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			multi = i * j;
			cout << i << " x " << j << " = " << multi << endl;
		}
	}


	system("pause>0");
}