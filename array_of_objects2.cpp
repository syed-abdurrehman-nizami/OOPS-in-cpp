// In this program i make array of objects and simply print through print function.

#include<iostream>
using namespace std;
class medicine {
    public:

    string name;
    int quatity;
    int price;

    void printdata()
    {
        cout<<"Name is : "<<name<<endl;
        cout<<"Quantity is : "<<quatity<<endl;
        cout<<"Price is : "<<price<<endl;
        cout<<endl;
    }
};
int main ()
{
    int n;
    cout<<"Enter how many objects you want : ";
    cin>>n;

    medicine arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter name : ";
        cin>>arr[i].name;
        cout<<"Enter quantity : ";
        cin>>arr[i].quatity;
        cout<<"Enter price : ";
        cin>>arr[i].price;
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        arr[i].printdata();
    }

    return 0;
}
