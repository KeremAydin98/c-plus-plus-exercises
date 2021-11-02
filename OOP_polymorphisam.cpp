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
	int ContentQuality;

public:
	YoutubeChannel(string name, string ownername) // a constructor
	{
		Name = name;
		OwnerName = ownername;
		Subscriberscount = 0;
		ContentQuality = 0;
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
	void check_analytics()
	{
		if (ContentQuality < 5)
		{
			cout << Name << " is low quality.";
		}
		else
		{
			cout << Name << " is high quality.";
		}

	}
};


class CookingYoutubeChannel :public YoutubeChannel
{
public:
	CookingYoutubeChannel(string name, string ownername) :YoutubeChannel(name, ownername)
	{

	}
	void Practice() {
		cout << OwnerName << " is practicing..." << endl;
		ContentQuality++;

	}

};

class SingersYoutubeChannel :public YoutubeChannel
{
public:
	SingersYoutubeChannel(string name, string ownername) :YoutubeChannel(name, ownername)
	{

	}
	void Practice() {
		cout << OwnerName << " is singing..." << endl;
		ContentQuality++;

	}

};
int main()
{
	CookingYoutubeChannel cookingYtchannel("Amy's kitchen", "Amy");
	SingersYoutubeChannel singersYtchannel("Johnsings", "John");

	cookingYtchannel.Practice();
	singersYtchannel.Practice();
	singersYtchannel.Practice();
	singersYtchannel.Practice();
	singersYtchannel.Practice();
	singersYtchannel.Practice();
	singersYtchannel.Practice();

	//pointers not yet learned
	YoutubeChannel* yt1 = &cookingYtchannel;
	YoutubeChannel* yt2 = &singersYtchannel;

	yt1->check_analytics();
	yt2->check_analytics();




	system("pause>0");


}

