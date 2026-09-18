#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	ofstream f1("my_fav_songs.txt",ios::app);
	char song[5][20];
	int i,n;
	cout<<"How many songs you want to add: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter fav song: ";
		cin>>song[i];
		f1<<song<<"\n";
	}
	cout<<"Song added successfully.";	
}
	
