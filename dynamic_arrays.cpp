#include <iostream>
using namespace std;


int main()
{
	int size;
	cout << "Enter size" << endl;
	cin >> size;

	//int array[size]; error: expression must be a constant value 
	
	int* array = new int[size]; //we can use new command to assign the size value without getting the error above

	for (int i = 0; i < size; i++)
	{
		cout << "Enter a value" << endl;
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";

	}
	// when you use dynamic memory each time you write new, 
	//you have to write delete corresponds to that new
	delete[]array;  
	array = NULL;


	system("pause>0");
}