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
    int n1, n2, i, size = 3;
    complex *o4 = new complex[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter real or imaginary part : ";
        cin >> n1 >> n2;
        o4->setdata(n1, n2);
        o4++;
    }
    cout << endl;

    o4 = o4 - size;
    for (i = 0; i < size; i++)
    {
        o4->getdata();
        o4++;
    }

    o4 = o4 - size;
    for (i = 0; i < size; i++)
    {
        cout << "Address of object number " << i + 1 << " is : " << o4 << endl;
        o4++;
    }
    o4 = o4 - size;
    cout << endl;

    delete[] o4;
    o4 = NULL;

    for (i = 0; i < size; i++)
    {
        cout << "Address of object number " << i + 1 << " is : " << o4 << endl;
        o4++;
    }

    return 0;
}