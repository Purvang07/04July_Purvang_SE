#include<iostream>
using namespace std;
class Task
{
	public:
			string title;
			bool isDone;
				
			//contructor
			Task(string taskTitle)
			{
				title = taskTitle;
				isDone = false;
				
			}
			void markDone()
			{
				isDone =  true;
			}
			//Display task with status
			void display()
			{
				if(isDone)

				{
					cout<< title << "- Done" <<endl;
					
				}
				else
				{
					cout<< title << "- Pending" <<endl;
				}
			}
	
};
main()
{
	Task task("Compelete assignment");
	task.display();
	task.markDone();
	task.display();
}
