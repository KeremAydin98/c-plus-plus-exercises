#include <iostream>
using namespace std;

int main()
{
	//+,-,*,/,%
	//++(increment),--(decrement)

	int counter = 7;
	counter++;
	cout << counter << endl; //prints 8
	counter--;
	cout << counter<<endl; //prints 7

	// or we can do this
	cout << ++counter<<endl; //prints 8

	//this does not work
	cout << counter++; //prints 8 again

	system("cls"); //clear screen

	//<,>,<=,>=,==,!=
	int a = 5, b = 5;
	cout << (a == b); //print 1 which means true

	system("cls");

	//&&,||,!(logical and, or, not operators)
	cout << (a == b && b == 6)<<endl; //print 0 which means false
	cout << !(a == b || a == 5); //prints 0 which means false

	system("cls");

	cout << (a == b && b == 3 + 2); 
	//prints 1 because aritmetic operators have bigger 
	//priority than relational operators and then
	// the last place is for the logical operators


	system("pause>0");
}