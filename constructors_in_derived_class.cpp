//  In this program i make three classes and make constructor in each class
//  and clarifying the working of derived class constructor.

/* Rules of constructor invoking in derived class.

EXAMPLE 1
class derived : public base1 , public base2{
    1 - base1()
    2 - base2()
    3 - derived()
};

EXAMPLE 2
class derived : public base2 , public base1{
    1 - base2()
    2 - base1()
    3 - derived()
};

EXAMPLE 3
class derived : virtual public base2 , virtual public base1{
    1 - base2()
    2 - base1()
    3 - derived()
};

EXAMPLE 4
class derived : public base2 , virtual public base1{
    1 - base1()
    2 - base2()
    3 - derived()
};

*/

#include <iostream>
using namespace std;
class first
{
protected:
    int d1, d2;

public:
    first(int n1, int n2)
    {
        cout << "FIRST class constructor" << endl;
        d1 = n1;
        d2 = n2;
    }
    void print_first(void)
    {
        cout << "The value of d1 = " << d1 << endl;
        cout << "The value of d2 = " << d2 << endl;
    }
};

class second
{
protected:
    int d3, d4;

public:
    second(int n1, int n2)
    {
        cout << "SECOND class constructor" << endl;
        d3 = n1;
        d4 = n2;
    }
    void print_second(void)
    {
        cout << "The value of d3 = " << d3 << endl;
        cout << "The value of d4 = " << d4 << endl;
    }
};

class third : public first, public second
{
protected:
    int d5, d6;

public:
    third(int n1, int n2, int n3, int n4, int n5, int n6) : first(n3, n4), second(n5, n6)
    {
        cout << "THIRD class constructor" << endl;
        d5 = n1;
        d6 = n2;
    }
    void print_third(void)
    {
        cout << "The value of d5 = " << d5 << endl;
        cout << "The value of d6 = " << d6 << endl;
    }
};

int main()
{
    third obj(5, 10, 15, 20, 25, 30), obj2(1, 2, 3, 4, 5, 6);

    cout << endl
         << endl;
    obj.print_first();
    obj.print_second();
    obj.print_third();

    cout << endl
         << endl;
    obj2.print_first();
    obj2.print_second();
    obj2.print_third();

    return 0;
}