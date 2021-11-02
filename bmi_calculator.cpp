#include <iostream>
using namespace std;


//BMI calculator
// weight(kg) / (height(m)*height(m))
//underweight<18.5
//Normal weight 18.5-24.9
//Overweight >25
int main()
{
	float weight, height,bmi;
	cout << "Enter your weight in kg: " << endl;
	cin >> weight;
	cout << "Enter your height in m: " << endl;
	cin >> height;
	bmi = weight / (height * height);
	if (bmi< 18.5)
	{
		cout << "You are underweight"<<endl;
	}
	else if (bmi> 25)
	{
		cout << "You are overweight"<<endl;
	}
	else
	{
		cout << "You are normal weight"<<endl;
	}
	cout << "Your bmi is: " << bmi;
	system("pause>0");
}