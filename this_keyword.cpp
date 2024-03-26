// this keyword refers to pointer that holds address of current object instance within a member
// function of that object's class. It allows you to access members and methods of the current
// object within its own methods. "this" is useful when you have local variables or parameters
// with the same names as member variables, as it helps differentiate between them. By using "this"
// you can explicitly specify that you are referring to the member variables of the current object.

#include <iostream>
using namespace std;
class ID
{
private:
    int n;

public:
    void setdata(int n)
    {
        this->n = n;
    }
    void getdata()
    {
        cout << "The value of n is : " << n << endl;
    }
};
int main()
{
    ID a, b, c;
    a.setdata(5);
    b.setdata(8);
    c.setdata(6);

    a.getdata();
    b.getdata();
    c.getdata();

    return 0;
}