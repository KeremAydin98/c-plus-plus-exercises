#include <iostream>
using namespace std;


bool primeindicator(int number)
{

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			//isprimeflag = false;
			//break;

			return false;
		}
	}
	return true;


}
//Prime number indicator
void main()
{
	int number;
	cout << "Enter a number: " << endl;
	cin >> number;

	bool isprimeflag=primeindicator(number);
	
	if (isprimeflag)
		cout << "Prime number";
	if (!(isprimeflag))
		cout << "Not prime number";





	system("pause>0");
}