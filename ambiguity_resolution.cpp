#include<iostream>
using namespace std;
class first {
    
    public:
        int a = 22;
        void dataone();
        void datatwo();      
};
void first :: dataone()
{
    cout<<"first class and data one"<<endl;
}
void first :: datatwo()
{
    cout<<"first class and data two"<<endl;
}

class second {
        
    public:
        void dataone();
        void datatwo();        
};
void second :: dataone()
{
    cout<<"second class and data one"<<endl;
}
void second :: datatwo()
{
    cout<<"second class and data two"<<endl;
}

class third : public first , public second{

    public:
        void data()
        {
            first :: dataone();
        }
        void datatwo()
        {
            second :: datatwo();
        }
};

int main()
{
    third obj1,obj2,obj3;

    obj1.data();
    obj2.datatwo();

    // to directly call any public member from any class.
    obj3.first :: datatwo();
    cout<<obj3.first :: a;
    
    return 0;
}