#include <iostream>
using namespace std;


//User enters integer number
//Program writes out if that number is even or odd
/* Simple if, else program
int main()
{
	cout << "Please enter an integer number: ";
	int number;
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "You have entered an even number";
	}
	else
	{ 
		cout << "You have entered an odd number";
	}

	system("pause>0");
}
*/

//Use enters side lengths of a triangle(a,b,c)
//Program should write out whether that 
//triangle is quilateral, isosceles or scalene
int main()
{
	cout << "Enter the side lengths of the triangle: ";
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b and b == c)
	{
		cout << "This is a quilateral triangle";
	}
	else if (a != b and a != c and b != c)
	{
		cout << "This is a scalene triangle";
	}
	else
	{
		cout << "This is an isoceles triangle";
	}

}