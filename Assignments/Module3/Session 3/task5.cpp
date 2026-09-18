#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Playlist
{
	public:
		string name;
		Playlist()
		{
			name = "My Favourites";
			cout<<"Playlist created."<<endl;
		}
		//Destructor
		~Playlist()
		{
			ofstream file("autosave.txt");
			file <<name;
			file.close();
			cout<<"Playlist automatically saved!"<<endl;
		}
};
main()
{
	Playlist py;
	cout<<"Playlist Name: "<<py.name<<endl;
}

