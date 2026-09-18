#include<iostream>
#include<string>
using namespace std;
class Song
{
	string title;
	string artist;
	public:
		void setTitle(string newT)
		{
			title = newT;
		}
		string getTitle()
		{
			return title;
		}
		void setArtist(string newA)
		{
			artist = newA;
		}
		//Getter for artist
		string getArtist()
		{
			return artist;
		}
};
main()
{
	Song sg;
	//Set initial values
	sg.setTitle("Perfect");
	sg.setArtist("Ed Sheeran");
	
	
	cout<<"Title: "<<sg.getTitle()<<endl;
	cout<<"Artist: "<<sg.getArtist()<<endl;
	
	sg.setTitle("Shape of You");
	cout<<"\nAfter updating title: "<<endl;
	cout<<"Title: "<<sg.getTitle()<<endl;
	cout<<"Artist: "<<sg.getArtist()<<endl;
	
}
