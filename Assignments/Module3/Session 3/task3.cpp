#include<iostream>
using namespace std;
class Movie
{
	public:
		string title;
		string director;
		int year;
		
		Movie(string movieTitle, string movieDirector, int movieYear)
		{
			title = movieTitle;
			director = movieDirector;
			year = movieYear;
		}
		//copy contructor
		Movie(const Movie &movie)
		{
			title = movie.title;
			director = movie.director;
			year =  movie.year;
		}
		void display()
		{
			cout<<"Movie Title: "<<title<<endl;
			cout<<"Director: "<<director<<endl;
			cout<<"Year: "<<year<<endl;	
		}
};
main()
{
	Movie original("Inception","Christopher Nolan", 2010);
	
	Movie copied(original);
	cout<<"Original Movie: "<<endl;
	original.display();
	cout<<"\nCopied Movie: "<<endl;
	copied.display();
}
