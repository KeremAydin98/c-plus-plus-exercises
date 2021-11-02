#include <iostream>
using namespace std;


//This program calculates the factorial of a number
int main()
{
	int number,factorial=1;
	cout << "Enter a number: " << endl;
	cin >> number;

	/* with while
	while(number>1)
	{
		factorial *= number;
		number -= 1;

	}
	*/

	//with for
	//(initial number, condition, increment)
	for(int i=1;i<=number;i++) // we could have used (int i=number;i>=1;i--) as well.
	{
		factorial *= i;
	}

	cout << "The factorial of your number is " << factorial;

	system("pause>0");
}