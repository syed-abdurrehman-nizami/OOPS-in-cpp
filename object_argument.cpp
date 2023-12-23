// In this program i pass objects as argument of function in a class

#include<iostream>
using namespace std;
class numbers {
    private:
        int n1,n2;
    public:
        void setdata(int a,int b) { n1 = a; n2 = b; }

        void sumdata(numbers o1, numbers o2) {
            n1 = o1.n1 + o2.n1;
            n2 = o1.n2 + o2.n2;
        }  

        void printdata() {
            cout<<"FIRST VALUE = "<<n1<<endl;
            cout<<"SECOND VALUE = "<<n2<<endl;
            cout<<endl;
        }    
};
int main()
{
    numbers obj1,obj2,obj3,obj4;

    obj1.setdata(10,20);
    obj2.setdata(50,100);
    obj3.sumdata(obj1,obj2);
    obj4.sumdata(obj1,obj3);


    obj1.printdata();  // 10 20
    obj2.printdata();  // 50 100
    obj3.printdata();  // 60 120
    obj4.printdata();  // 70 140
      
    return 0;
}