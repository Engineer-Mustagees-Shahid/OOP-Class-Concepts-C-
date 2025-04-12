#include<iostream>
#include<string>

using namespace std;

class Employee{
	
	private:
		
		string ID;
		const int salary;
		
	public:
		
		//constructor decalartion with inilizer list constructor
		
		Employee(string id, const int sal):salary(sal)
		{
			this->ID=id;
			cout<<endl<<" Address of the current object is :  "<<this<<"\n ID is : "<<ID<<"\n Salary is  : "<<sal<<endl;
		}
		
		// Destructor declaration
		
		~Employee()
		{
			cout<<endl<<" \"Object is deleted\" "<<endl;
		}
};

int main()
{
	// Dynamically allocated memory to object
	
	Employee *emp1= new Employee("BC240200124", 45000);
	
	//	Delete the object
	
	delete emp1;
	
	return 0;
}