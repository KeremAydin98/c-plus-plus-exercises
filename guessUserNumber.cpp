#include <iostream>
using namespace std;

//guessing the host user's number
int main()
{
	int hostUserNum, guestUserNum;
	cout << "Enter the host user number: "<<endl;
	cin >> hostUserNum;
	system("cls");
	cout << "Enter the guest user number: " << endl;
	cin >> guestUserNum;
	/*
	if (hostUserNum == guestUserNum)
	{
		cout << "You guessed it right";
	}
	else
	{
		cout <<"Try again!"
	}
	*/
	//or we can do this 

	(hostUserNum == guestUserNum) ? cout << "Correct" : cout 
		<< "Failed";


	system("pause>0");
}