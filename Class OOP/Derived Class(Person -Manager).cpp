#include<iostream>
#include<string>

using namespace std;

class Employee{
	
	protected:
		
		string name;
		string ID;
		float salary;
		
	public:
		
		// Parametrize Constructor declaration
		
		Employee(string n, string id, float sal)
		{
			name=n;
			ID=id;
			salary=sal;
		}
		
};

class Manager : public Employee{
	
	private:
		
		string department;
		
	public:
		
		// Derived Class constructor declaration with inilizer list to base class constructor through passing parameters
		
		Manager(string name, string id, float salary, string department) : Employee(name,id,salary)
		{
			this->department=department;
		}
		
		// Display Details of Manager
		
		void display_manager_details()
		{
			display_emp_details();
			cout<<" Department is : "<<department<<endl;
		}
		
		// Display Details of Employee
		
		void display_emp_details()
		{
			cout<<" Employee name : "<<name<<endl;
			cout<<" Employee ID : "<<ID<<endl;
			cout<<" EMployee Salary : "<<salary<<endl;
		}
		
};

int main()
{
	// Object creation
	
	Employee emp("ALi","24P-3000",45000.0);
	Manager mngr("ALi","24P-3000",45000.0,"CS");
	mngr.display_emp_details();
	cout<<endl<<endl;
	mngr.display_manager_details();
	
	
	return 0;
}