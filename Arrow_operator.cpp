// How to make pointers of objects and array of objects and use of arrow
// operator is also mentioned in this program.

#include <iostream>
using namespace std;
class complex
{
private:
    int r, i;

public:
    void setdata(int a, int b);
    void getdata();
};
void complex ::setdata(int a, int b)
{
    r = a;
    i = b;
}
void complex ::getdata()
{
    cout << "the number is : " << r << " + " << i << "i" << endl;
}

int main()
{
    complex o1;
    o1.setdata(10, 9);
    o1.getdata();
    cout << endl;

    complex *o2 = &o1;
    cout << "The address of o1 is : " << &o1 << endl;
    cout << "The address of o1 is : " << o2 << endl;
    (*o2).getdata();
    o2->getdata();
    cout << endl;

    complex *o3 = new complex;
    cout << "The address of new is : " << o3 << endl;
    cout << "The address of o3 is : " << &o3 << endl;
    o3->setdata(7, 8);
    o3->getdata();
    cout << endl;

    int n1, n2, i, size = 3;
    complex *o4 = new complex[size];
    complex *o4tem = o4;
    for (i = 0; i < size; i++)
    {
        cout << "Enter real or imaginary part : ";
        cin >> n1 >> n2;
        o4->setdata(n1, n2);
        o4++;
    }
    cout << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        o4tem->getdata();
        o4tem++;
    }

    return 0;
}