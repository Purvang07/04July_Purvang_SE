#include<iostream>
using namespace std;
class FoodOrder
{
	public:
		int orderId;
		string rname;
		bool isDelivered;
	FoodOrder(int id, string res, bool delivered)
	{
		orderId = id;
		rname = res;
		isDelivered = delivered;
	}
	void markDelivered()
	{
		isDelivered = true;
		cout<<"Order "<<orderId<<" has been delivered successfully!."<<endl;
	}	
};
main()
{
	FoodOrder ft(101,"Babji's chicken",false);
	ft.markDelivered();
}
