// In this function i make friend function

/* properties of friend function 
1 Not in hte scope of class 
2 Because it is not in scope of class so it cannot be called by object of class.
3 Can be invoked without the help of any object
4 Usually contains the objects as argument of function.
5 Can be declared inside public or private section of the class 
6 It cannot access members directly by their names and need objectname.membername
  to access any member.
*/

#include<iostream>
using namespace std;
class complex_numbers{
    private:
        int n1,n2;
        public:
        friend complex_numbers sum_complex(complex_numbers o1, complex_numbers o2); 
        int setdata(int a,int b);
        int getdata();
};
int complex_numbers :: setdata(int a,int b)
{
    n1 = a;
    n2 = b;
}
int complex_numbers :: getdata ()
{
    cout<<"The number is "<<n1<<" + "<<n2<<"i"<<endl;
}

complex_numbers sum_complex(complex_numbers o1, complex_numbers o2)
{
    complex_numbers new_obj;
    new_obj.setdata(o1.n1+o2.n1 , o1.n2+o2.n2);
    return new_obj;
}
int main()
{
    complex_numbers obj1,obj2,obj3,obj4;
    obj1.setdata(5,10);
    obj2.setdata(15,5);
    obj3 = sum_complex(obj1,obj2);
    obj4 = sum_complex(obj3,obj2);

    obj1.getdata();
    obj2.getdata();
    obj3.getdata();
    obj4.getdata();

    return 0;
}