#include<iostream>
#include<string>
using namespace std;


class Employee
{
    public:
    int ID, age, salary;
    string Name;
    
    public:
    void get()
    {
        cout<<"Enter Employee ID:";
        cin>>ID;
        
        cout<<"Enter Employee age: ";
        cin>>age;
        
        cout<<"Enter Employee salary: ";
        cin>>salary;
        
        cout<<"Enter name: ";
        cin>>Name;  
    }
    
    void display()
    {
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Employee age: "<<age<<endl;
        cout<<"Employee salary: "<<salary<<endl;
        cout<<"Employee name: "<<Name<<endl;                        
    }
    
    
};

class Education
{
    private:
    Employee E1;
    string degree, school, specialization;
    
    
    
    public:
    void get()
    {
        cout<<"Enter degree, school name and specialization of the person: "; 
        cin>>degree>>school>>specialization;
        E1.get();
        
    }
    
    void display()
    {
        cout<<"Degree: " <<degree<<endl;
        cout<<"school: " <<school<<endl;
        cout<<"specialization: " <<specialization;
        cout<<endl;
        E1.display();
        
    }    
};

int main()
{
    Education F;
    F.get();
    cout<<endl<<endl;
    F.display();
    return 0;
}


