#include<iostream>
using namespace std;
class SocialMediaUser
{
	public:
		
		string username;
		int followers;
		void displayProfile()
		{
			cout<<"Username: "<<username<<endl;
			cout<<"Followers: "<<followers<<endl;
		}
};
class YouTuber: public SocialMediaUser
{
	public:
		string channelName;
		void upload(string title)
		{
			cout<<"Video "<<title<<" uploaded to "<<channelName<<endl;	
		}
};
main()
{
	YouTuber yt;
	yt.username = "purvang07";
	yt.followers = 100;
	yt.displayProfile();
	yt.channelName = "Purvang Baraiya Vlogs";
	yt.upload("Diu Tour");
}
