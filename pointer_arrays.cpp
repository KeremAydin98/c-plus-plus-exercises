#include <iostream>
using namespace std;

/*
int get_max(int number[], int size,int max)
{
	for (int i = 0 ; i < size ; i++)
	{
		if (number[i] > max)
			max = number[i];
	}

	return max;
}
int get_min(int number[], int size,int min)
{

	for(int i = 0 ; i < size ; i++)
	{
		if (number[i] < min)
			min = number[i];
	}
	return min;
}
*/

//or simply we can use pointers to these two process in one function
void getMinMax(int number[], int size, int* min, int* max)
{
	for (int i = 0; i < size; i++)
	{
		if (number[i] > *max)
			*max = number[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (number[i] < *min)
			*min = number[i];
	}

}

//our objective is to obtain max and min value of an array
int main()
{
	int number[5] = { 2,1,3,4,5 };

	int min = number[0];
	int max = number[0];

	/*
	min = get_min(number, 5,min);
	max = get_max(number, 5,max);
	*/
	getMinMax(number, 5, &min, &max);

	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;


	system("pause>0");
}