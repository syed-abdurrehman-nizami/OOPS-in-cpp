//  In this program i make a parameterized constructor.

//  A constructor is a special method in object-oriented programming languages
//  that is automatically called when an object is created. Its primary purpose
//  is to initialize the attributes or properties of the object, allowing for
//  the setup of initial values and configurations.

#include <iostream>
using namespace std;
class empoly
{
public:
    string name;
    int salary;
    bool gender; //  0 is for male and 1 is for female.

    empoly(string n, int s, bool g)
    {
        cout << "Parameterized constructor called"<<endl;
        name = n;
        salary = s;
        gender = g;
    }

    void printinfo()
    {
        cout<<"Name is : "<<name<<endl;
        cout<<"Salary is : "<<salary<<endl;
        if(gender == 0)
        {
            cout<<"Gender is : Male"<<endl;
        }
        else{
            cout<<"Gender is : Female"<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    empoly obj1("hamza", 22000, 0);
    obj1.printinfo();

    return 0;
}