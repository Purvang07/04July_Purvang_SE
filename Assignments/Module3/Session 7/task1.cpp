#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	ofstream f1("my_fav_songs.txt");
	f1<<"Perfect"<<endl;
	f1<<"Love Yourself"<<endl;
	f1<<"Starboy"<<endl;
	f1<<"Peaches"<<endl;
	f1<<"Deadlines";
	cout<<"5 songs are written successfully!";
}
