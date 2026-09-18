#include<iostream>
using namespace std;
class InstaStory
{
	protected:
		int storyViews;
	public:
		InstaStory()
		{
			storyViews = 5000;	
		}	
};
class SponsoredStory: public InstaStory
{
	public:
		void display()
		{
			cout<<"Total views is "<<storyViews<<endl;	
		}	
};
main()
{
	SponsoredStory st;
	st.display();
}
