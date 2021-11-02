#include <iostream>
using namespace std;

//Write out all the numbers between 100-500 that are 
//divisible by 3 and 5
int main()
{
	int counter = 100;
	while (counter <= 500)
	{
		if (counter % 15 == 0)
			cout << counter << " is divisible by 15."<<endl;
		
		counter++;
	}


	system("pause>0");
}