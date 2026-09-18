#include<iostream>
using namespace std;
class SocialMediaUser
{
	public:
		string username;
		int followers;
		void display()
		{
			cout<<"Username: "<<username<<endl;
			cout<<"Followers: "<<followers<<endl;
		}
};
class Podcaster : public SocialMediaUser
{
	public:
		string pdname;
		void Episode(string title)
		{
			cout<<"Video "<<title<<" is uploaded in "<<pdname;
		}
};
main()
{
	Podcaster py;
	py.username = "purvang07";
	py.followers = 100;
	py.display();
	py.pdname = "The ranveer show";
	py.Episode("How to build confidence");
}
