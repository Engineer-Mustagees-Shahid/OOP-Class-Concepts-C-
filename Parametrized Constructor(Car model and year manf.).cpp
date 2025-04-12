#include<iostream>
#include<string>

using namespace std;

class Car{
	
	private:
		
		string car_model;
		
	public:
		
		int year_manufacture;
		
		Car(string model, int year)
		{
			this->car_model=model;
			this->year_manufacture=year;
			cout<<endl<<" Model of the car is : "<<model<<"\n Manufacturer Year is : "<<year<<endl;
		}
		
		~Car()
		{
			cout<<endl<<this<<" Object is destroyed !"<<endl;
		}
};

int main()
{
	Car *car1= new Car("25ToyottaL20",2025);
	delete car1;
	
	return 0;
}