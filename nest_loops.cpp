#include <iostream>
using namespace std;


//We want user to enter a grade betwen 1-5 
//Then we will give the average of the grades
void main()
{
	int grade, sum = 0,i;
	float average;
	for (i = 1; i <= 3; i++)
	{

		do {
			cout << "Enter the grade " << i<<":" << endl;
			cin >> grade;

		} while (grade < 1 || grade>5);
		sum += grade;
	}

	average = float(sum) / 3;
	cout << "The average is: " << average;

	system("pause>0");
}