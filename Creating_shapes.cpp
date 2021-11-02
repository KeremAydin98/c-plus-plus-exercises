#include <iostream>
using namespace std;

//Create a shape with height and width information using *
void main()
{
	int height, width;
	cout << "Enter height: " << endl;
	cin >> height;

	cout << "Enter width: " << endl;
	cin >> width;

	for (int i = 1; i <= height; i ++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << " " << "*" << " ";
			
		}
		cout << endl;

	}





	system("pause>0");
}