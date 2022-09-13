// C++ program to calculate total, average and 
// percentage marks of all subjects 
    
#include <iostream>
using namespace std; 
    
int main(){
    int subjects, i; 
    int roll; 
    float marks, total=0.0f, averageMarks, percentage;
    
    // Input number of subjects 
     
    cout << "Enter number of subjects\n";  
    cin >> subjects;  

   //  Input roll no
    cout << "Enter your Roll number \n";
    cin >> roll;
    
    //  Take marks of subjects as input 
    cout << "Enter marks of subjects\n";
    
    for(i = 0; i < subjects; i++){
       cin >> marks;
       total += marks; 
    }
    // Calculate Average
    averageMarks = total / subjects;
     
    // Each subject is of 100 Marks 
    percentage = (total/(subjects * 100)) * 100;  
    
    cout << "Total Marks = " << total;  
    cout << "\nAverage Marks = " << averageMarks;  
    cout << "\nPercentage = " << percentage;  
    return 0;  
} 

