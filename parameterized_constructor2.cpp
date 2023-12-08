// In this program i take values form user and pass the values in parameterized constructor 
// and print the values inside same for loop.

#include <iostream>
using namespace std;
class item{
    public:

    string name;
    int price;

    item(string n,int p)
    {
        cout<<"Parameterized constructor called"<<endl;
        name = n;
        price = p;
    }

    void print_info()
    {
        cout<<"Item is : "<<name<<endl;
        cout<<"Price is : "<<price<<endl;
        cout<<endl;
    }
};

int main ()
{
    int n;
    cout<<"How many item you want to store : ";
    cin>>n;

    string arr_name[n];
    int arr_price[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter item name : ";
        cin>>arr_name[i];
        cout<<"Enter price : ";
        cin>>arr_price[i];
    }

    for(int i=0;i<n;i++)
    {
        item a(arr_name[i],arr_price[i]);
        a.print_info();
    }

    return 0;
}