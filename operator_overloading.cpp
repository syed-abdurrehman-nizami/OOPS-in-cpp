// Operator overloading allows you to redefine how operators (like `+`, `-`, `*`, etc.) work with user-defined
// types (like classes) in programming. For example, you can define what happens when you add two objects of
// your class together using the `+` operator.

#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int marks;

public:
    student() {} // Default constructor

    void setname(string name)
    {
        this->name = name;
    }

    student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    void operator++(int) // for postfix
    {
        marks++;
    }
    void operator--() // for perfix
    {
        --marks;
    }

    student operator+(student obj)
    {
        student tem("tem", 0);
        tem.marks = marks + obj.marks;
        return tem;
    }

    student operator*(student obj)
    {
        student tem("tem", 0);
        tem.marks = marks * obj.marks;
        return tem;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main()
{
    student A("usman", 10);
    student B("ali", 20);

    A.display();
    cout << endl;

    A++;

    A.display();
    cout << endl;

    B.display();
    cout << endl;

    --B;

    B.display();
    cout << endl;

    student C;

    C = A + B;
    C.setname("Ahmad");

    C.display();
    cout << endl;

    C = A * B;
    C.setname("Ahmad");

    C.display();
    cout << endl;

    return 0;
}