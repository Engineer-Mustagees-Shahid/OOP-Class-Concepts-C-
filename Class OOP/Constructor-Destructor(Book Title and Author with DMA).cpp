#include<iostream>
#include<string>

using namespace std;

class Book{
	
	private:
		
		string title;
		string author;
		
	public:
		
		// Constructor declaration
		
		Book(string title, string author)
		{
			this->author=author;
			this->title=title;
		}
		
		// Display Function 
		
		void display()
		{
			cout<<endl<<" Title of the book is : "<<title<<"\n Author of book is : "<<author<<endl;
		}
		
		// Destructor declaration
		
		~Book()
		{
			cout<<endl<<" "<<title<<" Book is destroyed "<<endl;
		}
	
};

int main()
{
	
	string title,author;
	cout<<" Enter the title of the book : ";
	getline(cin, title);
	cout<<" Enter the author of the book : ";
	getline(cin, author);
	
	//Dynamically allocatedmemory to the object
	
	Book *book= new Book(title,author);
	
	book->display();
	
	// Delete the object 
	
	delete book;
	
	return 0;
}