#include <iostream>
using namespace std;

void myFunction() {

	int* ptr = new int[60000];
	ptr[2] = 10;

	cout << "Hi, I am " << ptr[2];

	//you must deallacate the pointer, if you don't you will get memory leaks
	delete[] ptr;
}
int main()
{
	myFunction();

	system("pause>0");
}