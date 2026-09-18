#include<iostream>
using namespace std;
struct OrderDetails
{
	int orderId;
	string restaurantName;
	bool isDelivered;
};
class FoodOrder
{
	public:
		int orderId;
		string restaurantName;
		bool isDelivered;
		FoodOrder(OrderDetails order)
		{
			orderId = order.orderId;
			restaurantName = order.restaurantName;
			isDelivered =  order.isDelivered;
		}
		void markDelivered()
		{
			isDelivered = true;
			cout<<"From "<<restaurantName<<" Order "<<orderId<<" has been delivered successfully!"<<endl;
		}
};
main()
{
	OrderDetails details = {101,"Radhika",true};
	FoodOrder order(details);
	order.markDelivered();	
}
