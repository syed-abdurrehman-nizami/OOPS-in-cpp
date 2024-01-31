// In C++, inheritance is a mechanism that allows a new class (called the derived class)
// to inherit properties and behaviors from an existing class (called the base class).
// inherit means access.

// In C++, single inheritance means a class can inherit properties and behaviors from
// only one other class. It forms a simple parent-child relationship, where the
// child class (derived class) inherits from a single parent class (base class).

#include<iostream>
using namespace std;
class first {
    int data1;

    public:
    int data2;

    void setdata(int ,int );
    int getdata1();
    int getdata2();
             
};
void first :: setdata(int a,int b)
{
    data1 = a;
    data2 = b;
}
int first :: getdata1()
{
    return data1;
}
int first :: getdata2()
{
    return data2;
}

class second : public first{
    int data3;

    public:
    void cal_data3();
    void display();      
};
void second :: cal_data3 ()
{
    data3 = data2 + getdata1();
    display();   //  called nesting of member function
}
void second :: display()
{
    cout<<"Value 1 is : "<<getdata1()<<endl;
    cout<<"Value 2 is : "<<data2<<endl;
    cout<<"Value 3 is : "<<data3<<endl;
}
int main()
{
    second obj1,obj2,obj3;

    obj1.setdata(5,4);
    obj2.setdata(4,2);
    obj3.setdata(4,8);

    obj1.cal_data3();
    obj2.cal_data3();
    obj3.cal_data3();

    return 0;
}