#include<iostream>
#include<string>

using namespace std;

class Person{
	
	private:
		
		string name;
		int age;
		
	public:
		
		// Setter function to set age and name
		
		void set_details(string n, int a)
		{
			name=n;
			age=a;
		}
		
		// usage of virtual keyword to overcome the problem of override
		
		virtual void display()
		{
			cout<<endl<<" Name is : "<<name<<endl;
			cout<<endl<<" Age  is : "<<age<<endl;
		}
};

class Student : public Person{
	
	private:
		
		string grade;
		
	public:
		
		// setter function
		
		void set_st_details(string n, int age, string grade)
		{
			set_details(n,age);
			this->grade=grade;	
		}
		
		// usage of virtual keyword to overcome the problem of override
		
	     virtual void display()
		{
			Person::display();
			cout<<endl<<" Grade of Student is : "<<grade<<endl;
		}
};

int main()
{
	// Object creation
	
	Student s1;
	s1.set_st_details("Ali",20,"A+");
	cout<<endl<<" Student Details is : "<<endl;
	s1.display();
	
	return 0;
}
