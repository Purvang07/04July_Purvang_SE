#include<iostream>
#include<string>
using namespace std;
class Playlist
{
	public:
		string name;
		string createdOn;
		bool isPublic;
		
		string songs[50];
		int songCount;
		Playlist(string playlistName, string date, bool publicStatus)
		{
			name = playlistName;
			createdOn = date;
			isPublic = publicStatus;
			songCount = 0;
		}
		void addsong(string songTitle)
		{
			songs[songCount] = songTitle;
			songCount++;
		}
		void displaySongs()
		{
			cout<<"\nUpdated Songs List: "<<endl;
			for(int i=0;i<songCount;i++)
			{
				cout<<i+1<<". "<<songs[i]<<endl;
			}
			
		}
};
main()
{
	
	Playlist pt("Motivation","14-09-2026", true);
	pt.addsong("Perfect");
	pt.addsong("Believer");
	pt.addsong("Shape of You");
	pt.displaySongs();
}
