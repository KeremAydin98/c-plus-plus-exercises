#include <iostream>
using namespace std;


//Calculator
int main()
{
	float num1, num2;
	char operation;
	cout << " * *Calculator * *" << endl;
	cin >> num1 >> operation >> num2;
	
	switch (operation)
	{
	case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '%':
		bool num1Int, num2Int;
		num1Int = (int(num1) == num1);
		num2Int = (int(num2) == num2);
		if (num1Int && num2Int)
			cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
		else
			cout << "Not valid!";
		break;

	default:
		cout << "Invalid operation!";

	}
	system("pause>0");

}