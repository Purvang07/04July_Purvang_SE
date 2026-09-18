#include<iostream>
#include<string>
using namespace std;
class Content
{
	public:
		string title;
		string platform;
		int views;
		string status;
		Content(string t, string p, int v, string s)
		{
			title = t;
			platform = p;
			views = v;
			status = s;
		}
		void display()
		{
			cout<<"Title: "<<title<<endl;
			cout<<"Platform: "<<platform<<endl;
			cout<<"Views: "<<views<<endl;
			cout<<"Status: "<<status;
		}
};
main()
{
	Content cm(
	"Self Introduction",
	"YouTube",
	1100,
	"Active");
	cm.display();
}
