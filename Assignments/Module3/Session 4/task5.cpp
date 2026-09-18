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
			cout<<"Video "<<title<<" uploaded to "<<channelName<<endl;
		}
};
class Podcaster : public SocialMediaUser
{
	public:
		void uploadPodcast(string title)
		{
			cout<<"Podcast "<<title<<" uploaded."<<endl;
		}
};
class InstagramInfluencer :public SocialMediaUser
{
	public:
		void postStory(string title)
		{
			cout<<username<<" posted a new story "<<title<<endl;
		}
 };
 main()
 {
 	InstagramInfluencer ig;
	 ig.username = "purvangkb07";
	 ig.followers = 3000;
	 ig.displayProfile();
	 ig.postStory("Unboxing iphone 18");
}
