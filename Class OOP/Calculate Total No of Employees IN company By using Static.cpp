#include<iostream>

using namespace std;

class Total_employees{
	
	private:
		
		static int count;
	
	public:
		
		// Constructor declaration
		
		Total_employees()
		{
			cout<<endl<<" New Employee Joined the company. "<<endl;
			count++;
		}
		
		// static function
		
		static void display();
		
		// Destructor decalartaion 
		
		~Total_employees()
		{
			cout<<endl<<endl<<" Employee resigned. "<<endl;
			count--;
		}
		
};

// Declaration of static members through scope resolution

int Total_employees::count=0;
void Total_employees::display()
{
	cout<<endl<<" Total no of employees in the company are : "<<count<<endl;
}

int main()
{
// Dynamically allocated objects

	Total_employees *emp1= new Total_employees();
	Total_employees::display();
	Total_employees *emp2= new Total_employees();
	Total_employees::display();
	Total_employees *emp3= new Total_employees();
	Total_employees::display();
// Delete the object

	delete emp1;
	cout<<endl<<endl<<" After Resigning Employee 01 "<<endl<<endl;
	Total_employees::display();
	
	return 0;
}