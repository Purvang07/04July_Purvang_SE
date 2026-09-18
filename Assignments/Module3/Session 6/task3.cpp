#include<iostream>
using namespace std;
class Product
{
	public:
		void upload()
		{
			cout<<"This is shopping app\n";		
		}
};
class Electronics : public Product
{
	public:
		void upload()
		{
			cout<<"You can buy any electronics items\n";
		}
		
};
class Clothing : public Product
{
	public:
		void upload()
		{
			cout<<"You can buy T-shirt here\n";
		}
};
main()
{
	Electronics el;
	el.upload();
	Clothing cl;
	cl.upload();
}
