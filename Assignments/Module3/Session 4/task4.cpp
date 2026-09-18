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
class YouTuber:public SocialMediaUser
{
	public:
		string channelName;
		void uploadVideo(string title)
		{
			cout<<"Video " <<title<< " uploaded to"<<channelName<<endl;
			
		}
};
class GamingYouTuber : public YouTuber
{
	public:
		void streamGame(string gameName)
		{
			cout<<username<<" is now streaming "<<gameName<<" on "<<channelName<<endl;
		}
};
main()
{
	GamingYouTuber gm;
	gm.username = "purvangkb07";
	gm.followers = 2000;
	gm.channelName = "Pk Gaming";
	
	gm.displayProfile();
	gm.uploadVideo("New Gaming Setup");
	gm.streamGame("GTA V");
	
}
