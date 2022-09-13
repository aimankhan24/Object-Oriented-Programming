#include <iostream>
using namespace std;
#include <string>

class Employee
{
    private:
        int SSN;
        string name;
        int age;
        
    public:

      // Setter
        void setSSN(int s)
        {
            SSN=s;
        }
        
        void setName(string n)
        {
            name=n;
        }
        
        void setAge(int a)
        {
            age=a;
        }
            
        // Getter
        int getSSN()
        {
            return SSN;
            
        }
        
        string getName()
        {
            return name;
        }
        
        int getAge()
        {
            return age;
        }
};

int main(){
    Employee E;
    E.setSSN(9098);
    E.setName("Jack");
    E.setAge(35);
    E.getSSN();
    E.getName();
    E.getAge();
    cout<<E.getSSN()<<endl<<E.getName()<<endl<<E.getAge();
    return 0;
}
