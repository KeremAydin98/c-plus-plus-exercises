#include <iostream>
#include <list>
using namespace std;

//class
class Artificial_Intelligence
{
// public attributes so that we can reach to these values from outside of this class
public:
	string Type;
	string Method;
	int parameter;
	list<string> Types_of_machine_learning;

	Artificial_Intelligence(string type, string method) // a constructor
	{
		Type = type;
		Method = method;
		parameter = 0;

		
	}

	void get_info()
	{
		cout << "Type: " << Type << endl;
		cout << "Method: " << Method << endl;
		cout << "k_parameter: " << parameter << endl;
		cout << "All types of ML: " << endl;
		for (string Types : Types_of_machine_learning)
		{
			cout << Types << endl;
		}
	}

};
int main() {


	//we do not need this many codes
	/*
	Artificial_Intelligence AI; //an object
	AI.Type = "Unsupervised learning";
	AI.Method = "k_means";
	AI.parameter = 4;
	AI.Types_of_machine_learning = { "Unsupervised learning, Supervised learning, Reinforcement learning" };
	*/ 

	//using a constructor
	Artificial_Intelligence AI("Unsupervised learning", "k_means");
	// push back adds elements at the end of the list
	AI.Types_of_machine_learning.push_back("Unsupervised learning");
	AI.Types_of_machine_learning.push_back("Supervised learning");
	AI.Types_of_machine_learning.push_back("Reinforcement learning");
	Artificial_Intelligence AI2("Supervised learning", "SVM");


	/* also instead of these we can use the get_info function
	cout << "Type: " << AI.Type << endl;
	cout << "Method: " << AI.Method << endl;
	cout << "k_parameter: " << AI.parameter << endl;
	cout << "All types of ML: " << endl;
	for (string Types : AI.Types_of_machine_learning)
	{
		cout << Types <<endl;
	}

	cout << "Type: " << AI2.Type << endl;
	cout << "Method: " << AI2.Method << endl;
	cout << "k_parameter: " << AI2.parameter << endl;
	cout << "All types of ML: " << endl;
	for (string Types : AI2.Types_of_machine_learning)
	{
		cout << Types << endl;
	}
	*/ 

	AI.get_info();
	AI2.get_info();

	system("pause>0");
}