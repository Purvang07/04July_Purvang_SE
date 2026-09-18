#include<iostream>
using namespace std;
class Playlist
{
	public:
		string name;
		Playlist()
		{
			name="My Favourite";
			cout<<"Welcome to your Playlist!"<<endl;
		}	
};
main()
{
	Playlist py;
	cout<<"Playlist Name: "<<py.name<<endl;
}
