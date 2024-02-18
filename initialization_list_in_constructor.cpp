//  In this program i can initialize variables by constructor
//  with new syntax called initialization list.

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class empolys {
    private:
        string name;
        int age;
        bool gender;
        
    public:
        empolys(string n,int a,bool g) : name(n) , age(a+10) , gender(g)
        {
            cout<<"Constructor called"<<endl;
        }
        void print(void)
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Age is : "<<age<<endl;
            cout<<"Gender is : "<<gender<<endl;
            cout<<endl;
        }
};
int main()
{
    empolys o1("syed abdurrehman" , 19 , 1);
    empolys o2("hamza israr" , 23 , 1);
    
    o1.print();
    o2.print();

    return 0;
}