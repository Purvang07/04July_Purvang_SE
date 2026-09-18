#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	int i,n;
	cout<<"Enter no. of products:";
	cin>>n;
	ofstream f1("wishlist.txt");
	char pro[5][20];
	int price[5];
	string std;
	for(i=0;i<n;i++)
	{
		cout<<"Enter product name: ";
		cin>>pro[i];
		cout<<"Enter price of product rs.";
		cin>>price[i];
	}
	for(i=0;i<n;i++)
	{
		f1<<"Product: "<<pro[i]<<endl;
		f1<<"Price: "<<price[i]<<endl;
		f1<<"-------------------------"<<endl;
	}
	f1.close();
	ifstream f2("wishlist.txt");
	while(getline(f2,std))
	{
		cout<<std<<"\n";
	}
}
