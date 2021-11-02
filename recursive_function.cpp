#include <iostream>
using namespace std;

int recursivefunction(int x,int y)
{
	if (x == y)
	{
		return y;
	}
	return x+recursivefunction(x + 1, y);
	

}
//sum numbers between m-n
void main()
{
	int num1,num2;
	cout << "Enter a number: " << endl;
	cin >> num1;
	cout << "Enter another number: " << endl;
	cin >> num2;
	/*
	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}
	*/

	// or we can use a recursive funcion
	
	cout << "Sum of all the numbers between " << num1 << " and " << num2 << ":" << endl;
	cout << recursivefunction(num1, num2);


	system("pause>0");
}