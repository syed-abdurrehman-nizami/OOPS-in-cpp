// In this program i make both the constructor and default constructor and 
// when i pass values with object of a class then parameterized constructor
// is called and when i cannot pass values then default contructor is called.


#include<iostream>
using namespace std;
class helmet{

    public:

    int price;
    string color;

    helmet(){
        cout<<"Default Constructor called."<<endl;
        price = 1000;
        color = "red";
    }

    helmet(int p, string c){
        cout<<"Parameterized Constructor called."<<endl;
        price = p;
        color = c;
    }

    void printinfo () {
        cout<<endl;
        cout<<"Price is : "<<price<<endl;
        cout<<"Color is : "<<color<<endl;
        cout<<endl;
    }
};

int main () 
{
    helmet obj1;
    helmet obj2(2500,"blue");
    helmet obj3(3000,"white");
    helmet obj4;
    helmet obj5;

    obj1.printinfo();
    obj2.printinfo();
    obj3.printinfo();
    obj4.printinfo();
    obj5.printinfo();
    
    return 0;
}


