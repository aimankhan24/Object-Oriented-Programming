#include <iostream>
#include <string>
using namespace std;

class Indoor_Patients{
protected:
    string name, admission_date, disease, discharge_date;
public:
    void getdata()
    {
        cout << "\nEnter name of the patient: ";
        cin >> name;
        cout << "Enter date of admission date: ";
        cin >> admission_date;
        cout << "Enter type of disease: ";
        cin >> disease;
        cout << "Enter discharge date: ";
        cin >> discharge_date;
    }
    
    void display()
    {
        cout << "\nPatient Name: " << name << endl;
        cout << "Date of Admission: " << admission_date << endl;
        cout << "Disease: " << disease << endl;
        cout << "Date of Discharge: " << discharge_date<< endl;
    }
};

class Patient_Age : public Indoor_Patients
{
protected:
    int age;
public:
    void getdata()
    {
        Indoor_Patients::getdata();
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
    cout << "Name: " << name <<endl;
            cout<<"age="<<age<<endl;
    }
};

int main()
{
    Patient_Age a1,a2;
    cout << "Patient 1:" << endl;
    a1.getdata();
    cout << "\nPatient 2:" << endl;
    a2.getdata();
    
cout << "\nPatients Information:" << endl;
    a1.display();
    a2.display();
    return 0;
}


