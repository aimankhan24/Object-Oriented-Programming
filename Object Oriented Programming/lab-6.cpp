#include<iostream>
#include<string>
using namespace std;

class father
{
protected :
int age;

public:
father(){}
father(int x)
{
age = x;
}

virtual void iam()
{
cout<<"I AM THE FATHER, my age is : "<<age;
}
};

class son:public father
{
public:
son(int x)
{
age=x;
}
void iam()
{
cout<<"\nI AM THE SON, my age is :"<<age<<endl;
}
};

class daughter:public father
{
public:
daughter(int x)
{
age=x;
}
void iam()
{
cout<<"\nI AM THE DAUGHTER, my age is :"<<age<<endl;
}
};

int main()
{

father f(78);
father *p;
f.iam();
son s(29);
p=&s;
p->iam();
daughter d(21);
p=&d;
p->iam();
return 0;
}

