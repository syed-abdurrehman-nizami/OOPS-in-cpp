// Access specifiers, also known as access modifiers, are keywords in programming languages that define the
// visibility and accessibility of class members (variables, methods, and nested classes).

// In this program i use different access modifiers with differnt derivation in inheritance.

/*
                                                        visibility mode
                    |____________________________________________________________________________________
                    |   private derivation         protected derivation          public derivation
Access modifiers    |   
                    |
private members     |   not inherit                   not inherit                   not inherit
protected members   |   private                       protected                     protected
public members      |   private                       protected                     public
                    |
*/

#include<iostream>
using namespace std;
class first {
    private:
        int n1;
    protected:
        int n2;
    public:
        int n3;

        void setdata(int a,int b,int c)
        {
            n1 = a;
            n2 = b;
            n3 = c;
        }
           
};

class second : public first{
    public:
       void printdata() {
        //  cout<<n1;           // not inherit 
            cout<<n2<<endl;
            cout<<n3<<endl<<endl;
       }   
};

class third : private first{
    public:

        void setdata(int b,int c)
        {
        //  n1 = a;            // not inherit
            n2 = b;
            n3 = c;
        }
        void printdata() {
        //  cout<<n1;          // not inherit
            cout<<n2<<endl;
            cout<<n3<<endl<<endl;
       }    
};

class fourth : protected first{
    public:

        void setdata(int b,int c)
        {
        //  n1 = a;            // not inherit
            n2 = b;
            n3 = c;
        }
         void printdata() {
        //  cout<<n1;          // not inherit
            cout<<n2<<endl;
            cout<<n3<<endl<<endl;
       }
};

int main()
{
    second a;
    a.setdata(5,10,15);
    a.printdata();

    third b;
    b.setdata(10,15);
    b.printdata();

    fourth c;
    c.setdata(10,15);
    c.printdata();

    return 0;
}