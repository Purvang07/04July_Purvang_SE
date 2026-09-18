#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	string title[5];
	string platform[5];
	string status[5];
	int count = 0;
	//Read data from file
	ifstream f1("content_list.txt");
	while(f1 >> title[count] >> platform[count] >> status[count])
	{
		count++;
	}
	f1.close();
	//Display content
	cout<<"Content List: "<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<i+1<<". "
			<<title[i]<<" "
			<<platform[i]<<" "
			<<status[i]<<endl;
	}
	//select content
	int choice;
	cout<<"\nEnter content number: ";
	cin>>choice;
	
	//update status
	cout<<"Enter new status: ";
	cin>>status[choice - 1];
	
	ofstream output("content_list.txt");
	for(int i=0;i<count;i++)
	{
		output<<title[i]<< " "
				<<platform[i]<< " "
				<<status[i]<<endl;
	}
	output.close();
	cout<<"Status updated successfully!"<<endl;
}
