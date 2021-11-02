#include <iostream>
#include <list>
using namespace std;

//class
class YoutubeChannel
{
// OOP encapsulation rule 
private:
	string Name;
	string OwnerName;
	int Subscriberscount;
	list<string> PublishedVideoTitles;

public:
	YoutubeChannel(string name, string ownername) // a constructor
	{
		Name = name;
		OwnerName = ownername;
		Subscriberscount = 0;
	}

	void get_info()
	{
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "Subscriberscount: " << Subscriberscount << endl;
		cout << "Videos: " << endl;
		for (string Videos : PublishedVideoTitles)
		{
			cout << Videos << endl;
		}
	}
	void inc_subscriber()
	{
		Subscriberscount++;
	}
	void dec_subscriber()
	{
		if (Subscriberscount > 0)
			Subscriberscount--;
	}
	void videos(string titles)
	{
		PublishedVideoTitles.push_back(titles);
	}
};


int main() {

	YoutubeChannel ytubechannel("Geography Now", "Barbs");

	ytubechannel.videos("Sweden");
	ytubechannel.videos("Switzerland");
	ytubechannel.videos("Turkey");

	ytubechannel.inc_subscriber();

	ytubechannel.get_info();

	system("pause>0");
}
