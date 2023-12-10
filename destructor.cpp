// In this program i make Destructor whcich is called at end of program and destory all objects.
// Destructor is called 5 times because there are 5 objects in this program.

#include<iostream>
using namespace std;
class worker{
    string name;

    public:

    int age;
    int salary;

    worker ()  {
        cout<<endl<<"Default constructor called"<<endl;
        name = "0";
        age = 0;
        salary = 0;
    }

    worker(string n,int a,int s) {
        cout<<endl<<"Parameterized constructor called"<<endl;
        name = n;
        age = a;
        salary = s;
    }

    worker(worker &a) {
        cout<<endl<<"Copy constructor called"<<endl;
        name = a.name;
        age = a.age;
        salary = a.salary;
    }

    ~worker() {
        cout<<endl<<"Destructor called";
    }

    printinfo() {
        cout<<endl;
        cout<<"Name is : "<<name<<endl;
        cout<<"Age is : "<<age<<endl;
        cout<<"Salary is : "<<salary<<endl;
    }

};
int main ()
{
    worker a("hamza",23,21000);
    worker b;
    worker c = a;
    worker d = a;
    worker e = b;
    
    a.printinfo();
    b.printinfo();
    c.printinfo();
    d.printinfo();
    e.printinfo();

    return 0;
}