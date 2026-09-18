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
main()
{
	SocialMediaUser st;
	st.username = "purvangkb07";
	st.followers = 100;
	st.displayProfile();
}
