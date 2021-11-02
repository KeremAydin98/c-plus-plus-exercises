#include <iostream>
using namespace std;

/*ASCII table
int main()
{
	// the number which represents this letter 
	cout << (int)'a' << endl; 
	cout << int('a') << endl;
	// 'a'=97

	//a different number represents the upper case letter a 
	//so that it can distinguish between the two
	cout << int('A') << endl;
	// 'A'=65

	//which letter is assigned to this number
	cout << char(65) << endl;
	//65='A'
	system("pause>0");
}
*/

/*Simple program with ASCII table
int main()
{
	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letters: ";
	cin >> c1>>c2>> c3>>c4>>c5;
	cout << "ASCII message: ";
	cout << int(c1) << " "<<int(c2) << " "<<int(c3)
		<< " "<<int(c4) <<" "<< int(c5);

	system("pause>0");
}
*/


//Mini program added
//This shows the word associated with the input numbers
int main()
{
	int c1, c2, c3, c4;
	cout << "Enter four numbers: ";
	cin >> c1 >> c2 >> c3 >> c4;
	cout << "These numbers represent this word: ";
	cout << char(c1) << char(c2) << char(c3) << char(c4);
}
