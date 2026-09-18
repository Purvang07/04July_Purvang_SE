#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	string title[10];
	string platform[10];
	int views[10];
	string status[10];
	int count = 0;
	ifstream f1("content_list.txt");
	while(f1>>title[count]>>platform[count]>>views[count]>>status[count])
	{
		count++;
	}
	f1.close();
	cout<<"Content List:"<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<i+1<<". "
			<<title[i]<<" "
			<<platform[i]<<" "
			<<views[i]<<" "
			<<status[i]<<endl;
	}
	int choice;
	cout<<"\nEnter content number to delete: ";
	cin>>choice;
	
	for(int i=choice-1;i<count-1;i++)
	{
		title[i] = title[i+1];
		platform[i] = platform[i+1];
		views[i] = views[i+1];
		status[i] = status[i+1];
	}
	count--;
	ofstream output("content_list.txt");
	for(int i=0;i<count;i++)
	{
		output<<title[i]<< " "
				<<platform[i]<< " "
				<<views[i]<< " "
				<<status[i]<<endl;
	}
	output.close();
	cout<<"\nUpdated conetnt list: "<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<"i+1"<< ". "
			<<title[i]<< " "
			<<platform[i] << " "
			<<views[i]<< " "
			<<status[i]<<endl;
	}
}
