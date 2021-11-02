#include <iostream>
using namespace std;

void print_number(int* numberPtr)
{
	cout << *numberPtr << endl;
}
void print_letter(char* charPtr)
{
	cout << *charPtr << endl;
}

//void pointer
//be carefull with the pointers 
void print(void* ptr, char type)
{
	switch(type)
	{
	case 'i':cout << *((int*)ptr) << endl; break;
	case 'c':cout << *((char*)ptr) << endl; break;

	}
}
int main()
{
	int number = 5;
	//print_number(&number); 
	char me = 'k';
	//print_letter(&me);

	print(&number,'i');
	print(&me,'c');




	system("pause>0");
}