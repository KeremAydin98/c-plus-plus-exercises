#include <iostream>
#include <list>
using namespace std;

//class
class YoutubeChannel
{
	// OOP encapsulation rule 
private:
	string Name;
	int Subscriberscount;
	list<string> PublishedVideoTitles;

protected:
	string OwnerName;

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


class CookingYoutubeChannel :public YoutubeChannel
{
public:
	CookingYoutubeChannel(string name, string ownername) :YoutubeChannel(name, ownername)
	{

	}
	void Practice() {
		cout <<OwnerName<< " is practicing..." << endl;

	}

};
int main()
{
	CookingYoutubeChannel cookingYtchannel("Amy's kitchen", "Amy");
	CookingYoutubeChannel cookingYtchannel2("John's kitchen", "John");

	cookingYtchannel.videos("Apple pie");
	cookingYtchannel.videos("Chocolate cake");
	cookingYtchannel.inc_subscriber();
	cookingYtchannel.inc_subscriber();
	cookingYtchannel.get_info();
	cookingYtchannel.Practice();
	cookingYtchannel2.Practice();


	system("pause>0");


}

