#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    public:
    string vehicle_type;
    int fuel_amount;
    int speed;

    public:
     void getData(){
         cout<<"enter vehicle type"<<endl;
         cin>>vehicle_type;
         cout<<"enter fuel amount"<<endl;
         cin>>fuel_amount;
         cout<<"enter speed"<<endl;
         cin>>speed;
     }

     void display(){
           cout<<"Vehicle Properties"<<endl;
           cout<<"vehicle type:"<<vehicle_type<<endl; 
           cout<<"fuel amount:"<<fuel_amount<<endl;
           cout<<"speed:"<<speed<<endl;
     }
};


class Bike : public Vehicle {
  public:

    string owner_name;
    int model_number;
    int bike_number;

    public:

    void getData(){

    
    Vehicle::getData();

         cout<<"enter owner name"<<endl;
         cin>>owner_name;
         cout<<"enter model number"<<endl;
         cin>>model_number;
         cout<<"enter bike number"<<endl;
         cin>>bike_number;
     }
      void display(){

      Vehicle::display();
      cout<<"owner name:"<<owner_name<<endl;
      cout<<"model numbe:"<<model_number<<endl;
      cout<<"bike number:"<<model_number<<endl;

}
    };

    int main(){

Bike bikeobj1;
bikeobj1.getData();
bikeobj1.display();
return 0;

}


