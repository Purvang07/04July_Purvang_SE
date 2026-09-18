#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	ifstream f1("insta_followers.txt");
	if(!f1)
	{
		cout<<"Unable to open the file."<<endl;
		return 1;
	}
	string username;
	int count = 0;
	while(getline(f1, username))
	{
		if(!username.empty()){
			count++;
		}
	}
	f1.close();
	cout<<"Total followers: "<<count<<endl;

}
