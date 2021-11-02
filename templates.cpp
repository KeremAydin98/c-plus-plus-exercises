#include <iostream>
using namespace std;

template<class Type>
void Swap(Type& a, Type& b)
{
	Type temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 5, b = 7;
	cout << a << "-" << b << endl;
	Swap(a, b);
	cout << a << "-" << b << endl;

	char x = 'a', y = 'b';
	cout << x << "-" << y << endl;
	Swap(x, y);
	cout << x << "-" << y << endl;

	system("pause>0");
}