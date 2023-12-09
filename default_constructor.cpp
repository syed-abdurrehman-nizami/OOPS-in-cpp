// In this program when i make object of a class then default construtor automatically called.

//  A default constructor is a special function that is automatically called if you don't
//  provide any constructor in your class. It doesn't take any parameters and initializes 
//  the object's attributes with default values. It's called when you create an object
//  without explicitly specifying values for its attributes.

#include<iostream>
using namespace std;
class companies{
    public: 

    string name;
    int no_of_empolys;

    companies()
    {
        cout<<"Default constructor called"<<endl;
        name = "space x";
        no_of_empolys = 23;
    }

};
int main ()
{
    companies obj1;

    cout<<"Name is : "<<obj1.name<<endl;
    cout<<"Total empolys : "<<obj1.no_of_empolys<<endl;

    return 0;
}