#include<iostream>
using namespace std;
class Ticket
{
	public:
		~Ticket()
		{
			cout<<"saving your ticket..."<<endl;
		}
};
main()
{
	Ticket *ticket = new Ticket();
	cout<<"Ticket booked successfully!"<<endl;
	delete ticket;
}
