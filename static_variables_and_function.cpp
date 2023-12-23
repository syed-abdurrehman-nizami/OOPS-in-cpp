// Static variable hold its value and every object can change its value
// and it is a single variable which is used by all objects and static
// function only access static data member of the class.

#include<iostream>
using namespace std;
class student {
    private:
        string name;
        static int count;
    public:
        void setdata() { cout<<"Enter name : "; cin>>name; count++; }
        void getdata() { cout<<"Name is : "<<name<<"   "<<count<<endl; }
        static void counter() { cout<<"Counter is at : "<<count<<endl<<endl; }
        
};
int student :: count;
int main()
{
    student a,b,c,d;

    a.setdata();
    a.getdata();
    a.counter();

    b.setdata();
    b.getdata();
    student::counter();

    c.setdata();
    c.getdata();
    student::counter();

    d.setdata();
    d.getdata();
    d.counter();
    
    return 0;
}