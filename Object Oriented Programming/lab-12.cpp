#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

class Employee{
private:
    string Name;
    string ID;
    int Age;
    double Salary;
public:
    void take(){
        fstream append;
         cout<<"Employee Name= ";
        getline(cin,Name);
        cout<<"Employee ID= ";
        cin>>ID;
        cout<<"Employee Age=";
        cin>>Age;
        cout<<"Employee Salary= ";
        cin>>Salary;

        append.open("employeee.txt",ios::app);
        if (append.is_open()){
        append<<"Employee Name= "<<Name<<endl;
        append<<"Employee ID= "<<ID<<endl;
        append<<"Employee Age="<<Age<<endl;
        append<<"Employee Salary= "<<Salary<<endl;
        }
        append.close();
}
void get(){
        fstream read;
        string r;
        cout<<"Displaying Data"<<endl;
        read.open("employeee.txt",ios::in);
        if (read.is_open()){
            while (getline(read,r))
            {cout<<r<<endl;}
        }
        read.close();
}
};

int main(){
    Employee c1;
    c1.take();
    c1.get(); 
    return 0;  
}
