// In this program i can write a function outside the class which access private data.

#include<iostream>
using namespace std;
class empolys {
    private:
        string name;
        int age;
        
    public:
        string gender;

        void setdata(string n,int a);
        
        void getdata()
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Age is : "<<age<<endl;
            cout<<"Gender is : "<<gender<<endl<<endl;
        }  
};

void empolys :: setdata(string n,int a)
{
    name = n;
    age = a;
}

int main()
{
    empolys obj1,obj2;
    string name;
    int age;

    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter gender : ";
    cin>>obj1.gender;
    obj1.setdata(name,age);

    cout<<endl<<endl;

    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter gender : ";
    cin>>obj2.gender;
    obj2.setdata(name,age);

    obj1.getdata();
    obj2.getdata();
    
    return 0;
}