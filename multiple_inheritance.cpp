// In this program i write a program of mutiple inheritance in which i write two base classes and one drived class.
// I also use constructor overloading in it.

#include<iostream>
using namespace std;
class first {
    protected:
        int n1;
    public:
        void setn1(int a)
        {
            n1 = a;
        }
};

class second {
    protected:
        int n2;
    public:
        void setn2(int a)
        {
            n2 = a;
        }
};

class third : public first , public second{
    protected:
        int n3;  
    public:
        void setn3(int a)
        {
            n3 = a;
        }

        third(){}

        third(int a,int b,int c)
        {
            n1 = a;
            n2 = b;
            n3 = c;
        }

        third(int a,int b)
        {
            n1 = 0;
            n2 = a;
            n3 = b;
        }    

        third(int a)
        {
            n1 = a;
            n2 = 0;
            n3 = 0;
        } 

        void display()
        {
            cout<<"The value of n1 is : "<<n1<<endl;
            cout<<"The value of n2 is : "<<n2<<endl;
            cout<<"The value of n3 is : "<<n3<<endl<<endl;
        }
};
int main()
{
    third a;
    a.setn1(5);
    a.setn2(6);
    a.setn3(8);

    third b(1,2,3);
    third c(10,15);
    third d(6);

    a.display();
    b.display();
    c.display();
    d.display();
    
    return 0;
}