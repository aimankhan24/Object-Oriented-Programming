#include<iostream>
#include<string>
using namespace std;

class publication

{

    protected:

    string title;

    float price;

    public:

    publication()

    {

         }

        publication(string t,float p)

        {

         title=t;

         price=p;

         }

   public: 

void getdata()

{

 cout<<"Enter title of publication: ";

 cin>>title;

 cout<<"Enter price of publication: ";

 cin>>price;

  }
  void putdata()

 {

    cout<<"Publication titles :"<<title<<endl;

    cout<<"Publication price :"<<price<<endl;

 }

 

};

     class book : public publication

     {

         int pagecount;

         public:

         book()

         {

             pagecount=0;

         }

         //After : base class constructor is called 

         book(string t,float p,int pc):publication(t,p)
         {

             pagecount=pc;

         }

         void getdata()

         {

         publication::getdata();//call publication class function to get getdata

         cout <<"Enter Book Page Count :"; 
         cin>> pagecount;

         }

         
         void putdata()

         {

         publication::putdata(); 

         cout<< "Book page count:"<<pagecount <<endl; 

         }

     };

     class Tape: public publication

     {

         float time1;

         public:

         Tape()

         {

         }

         
         Tape(string t, float p, float tim):publication(t,p)

         {

             time1=tim;

         }

         

         void getdata()

         {

         publication::getdata();

         cout <<"Enter tape's playing time:";
         cin>> time1;

         }

         

         void putdata()

         {

          publication::putdata();

          cout<<" Tape's playing time :"<< time1<<endl;

         }

     };

int main()

{

    cout<<"Book data"<<endl;

    book b("C++",230,300);

    b.putdata();

    cout<<"Tape Data"<<endl;

    Tape c("C++",100,120.5);

    c.putdata();

    

    cout<<"\n Enter New Details Of Book :\n";

    b.getdata();

    c.getdata();

    cout<<"\n Book data entered by user:\n";

    b.putdata();

    c.putdata();

    return 0;

}

