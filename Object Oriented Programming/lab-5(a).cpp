#include <iostream>
#include<conio.h>
using namespace std;

double power(int n, int p=2)
{
    int x=n;
    for (int j=1; j<p; j++)
    {
     x *= n;
        }
    return x;
}

double power(float n, int p=2)
{
    float x=n;
    for (int j=1; j<p; j++)
    {
     x *= n;
        }
    return x;
}

double power(double n, int p=2)
{
    double x=n;
    for (int j=1; j<p; j++)
    {
      x *= n;
        }
    return x;
}



int main(void)
{
    cout << "n is integar: " << power(13,2) << endl;
    cout << "n is float: " << power(1.456,5) << endl;
    cout << "n is double: " << power(3.723457890,3) << endl;
}
