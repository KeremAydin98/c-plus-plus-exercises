#include <iostream>
using namespace std;

/* without the input 
int main()
{
	float annualSalary = 50000.99;
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is: " << monthlySalary;

	system("pause>0");
}
*/

/* basic program
int main()
{
	float annualSalary; 
	cout << "Enter your annual salary value: ";
	cin >> annualSalary ;//input for the annualsalary
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is: " << monthlySalary << endl; 
	cout << "In 10 years you will earn: " << 10 * annualSalary;

	char character = 'a'; //string value is called char

	system("pause>0");
}
*/

/* all types of variables
int main()
{
	int yearOfBirth = 1995;
	char gender = 'f';
	float average_grade = 8.5;
	bool isover18 = true;
	double balance = 4545435353; //for very large numbers

	//How many bytes can an int type use?
	cout << "Size of int is: " << sizeof(int) << " bytes\n"; 

	//minimum value of the int type
	//-1,-2,-3,...,-2147393648
	cout << "Int min value is: " << INT_MIN << endl; 

	//maximum value of the int type
	//0,+1,+2,...,+2147483647
	cout << "Int max value is: " << INT_MAX << endl;

	//double the max value of int type
	cout << "Size of unsigned int is: " << sizeof(unsigned int) << "bytes\n";
	cout << "UInt max value is: " << UINT_MAX << endl;

	//Double the bytes of the int type
	cout << "Size of double is: " << sizeof(double) << "bytes\n";

}

*/


int main()
{
	int intMax = INT_MAX;

	//2147483647
	cout << intMax<<endl; 

	//-2147483648(because of datatype overflow)
	cout << intMax + 1;
}