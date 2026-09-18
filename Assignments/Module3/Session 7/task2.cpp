#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	string std;
	ifstream f1("my_fav_songs.txt");
	while(getline(f1,std))
	{
		cout<<std<<"\n";
	}
}
