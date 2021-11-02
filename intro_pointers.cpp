#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	// %n shows the address of the variable n
	cout << &n << endl;

	// assigns the address to a pointer
	int* ptr = &n;
	cout << ptr << endl;

	//the value that is stored in this address
	cout << *ptr << endl;

	*ptr = 10;
	cout << *ptr << endl;
	cout << n << endl;

	int v;
	int* ptr2=&v;
	*ptr2 = 7;
	cout << "v=" << v << endl;

	system("pause>0");
}