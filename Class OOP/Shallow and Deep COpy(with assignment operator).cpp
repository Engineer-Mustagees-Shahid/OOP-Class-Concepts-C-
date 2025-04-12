#include<iostream>
#include<cstring>

using namespace std;

class Person{
	
	private:
		
        char *name;

    public:
    	
    // Constructor to initialize the name dynamically
    
    Person(const char *name)
	{
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        cout<<" Constructor called for "<<name<<endl;
    }

    // Copy Constructor for Shallow Copy
    
    Person(const Person &other)
	{
        this->name = other.name;
        cout<<" Shallow Copy Constructor called! "<<endl;
    }

    // Copy Constructor for Deep Copy
    
    Person(const Person &other, bool is_deep_copy)
	{
        if(is_deep_copy)
		{
            this->name = new char[strlen(other.name)+1];
            strcpy(this->name,other.name);
            cout<<" Deep Copy Constructor called! "<<endl;
        }
		 else 
		{
            this->name = other.name;
            cout<<" Shallow Copy Constructor called !"<<endl;
        }
    }

    // Assignment operator for Shallow Copy
    
    Person &operator=(const Person &other)
	{
        if(this==&other)
		{
            return *this;
        }
        
        this->name = other.name;
        cout<<" Shallow Assignment operator called! "<<endl;
        
        return *this;
    }

    // Assignment operator for Deep Copy
    
    void assign_deep(const Person &other)
	{
        if(this==&other)
            return;
        
        delete[] name;
        
        name = new char[strlen(other.name)+1];
        strcpy(name,other.name);
        cout<<"Deep Assignment method called ! " <<endl;
    }

    // Destructor to clean up dynamically allocated memory
    
    ~Person()
	{
        delete[] name;
        cout<<" Destructor called! "<<endl;
    }

    // Function to display the person's name
    
    void display()
	{
        cout<<" Name: " <<name<<endl;
    }
};

int main() 
{
    
    Person per1("M.Ali");
    per1.display();

    Person per2=per1;
    per2.display();

    
    Person per3("M.Ahmad");
    Person per4=Person(per3,true);
    per4.display();

    return 0;
}
