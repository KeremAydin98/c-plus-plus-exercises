#include <iostream>
using namespace std;


//Program for swapping values of two variables
int main()
{
	int a = 20;
	int b = 10;
	int dummy;
	dummy=a;
	a = b;
	b = dummy;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	system("cls");

	//or we can do this 

	int c = 20;
	int d = 10;

	c = c + d;
	d = c - d;
	c = c - d;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;

	system("pause>0");
}