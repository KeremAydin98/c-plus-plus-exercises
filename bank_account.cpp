#include <iostream>
using namespace std;

void showmenu()
{
	cout << "*******************MENU*******************" << endl;
	cout << "1. Check balance " << "2.Deposit " << "3.Withdraw " <<"4. Close the menu"<< endl;
	cout << "******************************************" << endl;


}

//Show menu
//1.Check balance,2.Deposit money,3.Withdraw money
int main()
{
	double balance = 500, deposit,withdraw;
	int option;
	do
	{ 
	
	showmenu();

	cout << "Enter an option: " << endl;
	cin >> option;
	system("cls");
	switch (option)
	{
	case 1: cout << "Your balance is " << balance << " $" << endl; break;
	case 2: cout << "Enter how much money you want to deposit: " << endl;
		cin >> deposit;
		balance += deposit; break;
	case 3: cout << "Enter how much money you want to withdraw: " << endl;
		cin >> withdraw;
		if (balance >= withdraw)
		{
			balance -= withdraw;
		}
		else
		{
			cout << "You do not have that much money.";
		}
		break;
	}
	} while (option != 4);

	system("pause>0");
}

