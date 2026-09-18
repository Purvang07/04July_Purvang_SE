#include<iostream>
using namespace std;
class Playlist
{
	public:
		string name;
		string createdOn;
		bool isPublic;
	Playlist(string playlistName, string date, bool publicStatus)
	{
		name = playlistName;
		createdOn = date;
		isPublic = publicStatus;
	}
	void togglePublic()
	{
		isPublic = !isPublic;
	}
	void display()
	{
		cout<<"Playlist Name: "<<name<<endl;
		cout<<"Creted On: "<<createdOn<<endl;
		if(isPublic)
			cout<<"Public: Yes"<<endl;
		else
			cout<<"Public: No"<<endl;
	}
};
main()
{
	Playlist pt("Motivation","12-09-2026", false);
	pt.display();
	
	pt.togglePublic();
	
	cout<<"\nAfter First Toggle: "<<endl;
	pt.display();
	
	pt.togglePublic();
	
	cout<<"\nAfter Second Toggle: "<<endl;
	pt.display();
}
