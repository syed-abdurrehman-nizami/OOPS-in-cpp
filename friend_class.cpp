// In this program i make 3 function of one class friend of another class.
#include<iostream>
using namespace std;
class numbers;
class calculator {
    public:
        int addfirstnumbers(numbers o1,numbers o2); 
        int addlastnumbers(numbers o1,numbers o2); 
        int addallnumbers(numbers o1,numbers o2);     
};
class numbers {
    private:
        int n1,n2;
        friend class calculator;
    public:
        void setdata(int a,int b)
        {
            n1 = a;
            n2 = b;
        }
        void getdata()
        {
            cout<<"First value is : "<<n1<<endl;            
            cout<<"Second value is : "<<n2<<endl<<endl;
        } 

};
int calculator :: addfirstnumbers(numbers o1,numbers o2)
{
    return (o1.n1+o2.n1);
}
int calculator :: addlastnumbers(numbers o1,numbers o2)
{
    return (o1.n2+o2.n2);
}
int calculator :: addallnumbers(numbers o1,numbers o2)
{
    return (o1.n1+o2.n1+o1.n2+o2.n2);
}
int main()
{
    numbers obj1,obj2;
    calculator cal;
    int res;

    obj1.setdata(10,20);
    obj2.setdata(5,15);

    obj1.getdata();
    obj2.getdata();

    res = cal.addfirstnumbers(obj1,obj2);
    cout<<"After adding first numbers : "<<res<<endl;

    res = cal.addlastnumbers(obj1,obj2);
    cout<<"After adding last numbers : "<<res<<endl;

    res = cal.addallnumbers(obj1,obj2);
    cout<<"After adding all numbers : "<<res<<endl;
    
    return 0;
}