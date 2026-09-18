#include<iostream>
using namespace std;
class Product
{
	public:
		string prname;
		int price;
		int rating;
		Product(string productname, int pr, int rt)
		{
			prname = productname;
			price =  pr;
			rating = rt;
		}
		void displayInfo()
		{
			cout<<"Product name: "<<prname<<endl;
			cout<<"Price of product: "<<price<<endl;
			cout<<"Rating: "<<rating<<"/5"<<endl;
		}
};
main()
{
	Product pt("I Phone 18 Pro",165000,4);
	pt.displayInfo();
}
