#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void read()
{
	string std;
	ifstream f1("content_list.txt");
	while(getline(f1, std))
	{
		cout<<std<<"\n";
	}
	
}
main()
{
	read();
}
