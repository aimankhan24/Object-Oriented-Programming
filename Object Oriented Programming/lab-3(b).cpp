#include<iostream>
using namespace std;

class DM
{
    public:
    double cm,m,km;
    public:
    int store(){
        cout<<"Enter distance in cm:"<<endl;
        cin>>cm;

        m=cm/100;
        km=cm/1000;

        return 0;
    }
    int display(){
        cout<<"The distance in cm is"<<cm<<"cm"<<endl;
        cout<<"The distance in meter:"<<m<<"m"<<endl;
        cout<<"The distance in kilometer:"<<km<<"km"<<endl;
        
        return 0;
    }
};

int main()

{
    DM d1;
    d1.store();
    d1.display();
    return 0;
}


