#include<iostream>

using namespace std;

class Vehicle{
	
	public:
		
		// usage of virtual function to overcome the problem of override
		
		virtual void start_engine()
		{
			cout<<endl<<" Engine of Vehicle is started. "<<endl;
		}
	
};

class Airplane : public Vehicle{
	
	public:
		
		// usage of virtual function to overcome the problem of override
		
		virtual void start_engine()
		{
			cout<<endl<<" Airplane engine is started ! "<<endl;
		}
		
		// function declaration of both functions of base and derived class
		
		void start_both_engines()
		{
			Vehicle::start_engine();
			start_engine();	
		}
	
};

int main()
{
	// Object creation
	
	Vehicle vh;
	cout<<endl<<" Calling start_engine() from Vehicle object: "<<endl;
	vh.start_engine();
	Airplane ap;
	cout<<endl<<" Calling start_engine() from Airplane object: "<<endl;
	ap.start_engine();
	
	cout<<endl<<endl;
	cout<<endl<<" Calling both base and derived class start_engine() from Airplane: "<<endl;
	ap.start_both_engines();
	
	return 0;
}
