#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Content
{
	public:
		string title;
		string platform;
		int views;
		string status;
		void input()
		{
			cout<<"Enter title: ";
			cin>>title;
			cout<<"Enter platform: ";
			cin>>platform;
			cout<<"Enter views: ";
			cin>>views;
			cout<<"Enter status: ";
			cin>>status;
		}
		void savetofile()
		{
			ofstream f1("content_list.txt",ios::app);
			f1<<"Title: "<<title<<endl;
			f1<<"Platform: "<<platform<<endl;
			f1<<"Views: "<<views<<endl;
			f1<<"Status: "<<status<<endl;
			f1<<"--------------------------"<<endl;
			f1.close();
			cout<<"Content saved successfully."<<endl;
		}
		
};
main()
{
	int choice;
	do{
		cout<<"\n--------Content Menu-------"<<endl;
		cout<<"1. Add new content idea"<<endl;
		cout<<"2. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				Content cp;
				cp.input();
				cp.savetofile();
				break;
			}
			case 2:
				cout<<"Exiting program..."<<endl;
				break;
			default:
				cout<<"Invalid choice"<<endl;	
		}	
	}while(choice != 2);
}
