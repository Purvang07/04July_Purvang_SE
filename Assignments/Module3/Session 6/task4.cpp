#include<iostream>
using namespace std;
class UserProfile
{
	private:
		string phone;
	public:
		void setPhoneNumber(string no)
		{
			phone = no;
		}
		string getPhoneNumber()
		{
			return phone;
		}
};
main()
{
	UserProfile pf;
	pf.setPhoneNumber("9898395988");
	cout<<"Phone no. "<<pf.getPhoneNumber()<<endl;
}
