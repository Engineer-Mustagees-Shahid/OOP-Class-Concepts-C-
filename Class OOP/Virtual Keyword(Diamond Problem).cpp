#include<iostream>


using namespace std;

class Shape{
	
	private:
		
		float area;
		
	protected:
		
		// Usage of Virtual keyword to get rid off the virtual problem

		virtual void calculate_area()=0;
		
		// Setter function to set area
				
		void set_area(float a)
		{
			area=a;
		}
		
	public:
		
		// Function to display area
		
		void display_area()
		{
			cout<<endl<<" Area of the shape "<<area<<endl;
		}
	
};

class Circle : public Shape{
	
	private:
		
		float radius;
		
	protected:
		
		// Function to calculated area
		
		void calculate_area()
		{
			float area=3.1416*radius*radius;
			set_area(area);
		}
		
	public:
		
		// Calling the Constructor of derived class
		
		Circle(float r)
		{
			radius=r;
			calculate_area();
		}
};

int main()
{
	// Object creation
	
	Circle c1(20.0);
	c1.display_area();
	
	return 0;
}