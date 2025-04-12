#include<iostream>
#include<string>

using namespace std;

class Rectangle{
	
	private:
		
		float length;
		float breath;
		
	public:
		
		// Parametrize Constructor declaration
		
		Rectangle(float length, float breath)
		{
			this->length=length;
			this->breath=breath;
		}
		
		// Copy Constructor declaration
		
		Rectangle(const Rectangle &rect1)
		{
			length=rect1.length;
			breath=rect1.breath;	
		}
		
		// Display Function
		
		void display()
		{
			cout<<" Length of the Rectangle is : "<<length<<"\n Breath of the Rectangle is : "<<breath<<endl;
		}
	
};

int main()
{
	Rectangle rect1(23.5,23.5);
	cout<<endl<<" Before Copy constructor ! \n"<<endl;
	rect1.display();
    
    // Shallow copy constructor called

	Rectangle rect2=rect1;
	
	cout<<endl<<" After Copy constructor ! \n"<<endl;	
	rect2.display();
	
	return 0;
}