#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;

//class Booth
class Booth
{
public:
int cars;
double money;
int paying,nonpaying;

//constructor of Booth class
Booth()
{
cars=0;
money=0;
paying=0;
nonpaying=0;
}

//to count paying cars
void payingCar()
{
cars++;
money+=0.50;
paying++;
}

//to count no pay cars
void nopayCar()
{
cars++;
nonpaying++;
}

void display()
{
cout<<"\nCars = "<<cars<<"\nMoney = "<<money;
cout<<"\nPaying Cars = "<<paying<<"\nNon paying cars = "<<nonpaying;
}
};

int main()
{

Booth bt;
bt.nopayCar();
bt.nopayCar();
bt.payingCar();
bt.payingCar();
bt.payingCar();
bt.display();
getch();
}

