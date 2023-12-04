// In this program i make array of objects and simply print the values.

#include<iostream>
using namespace std;
class citizen {
    public:

    string  name;
    int age;
};
int main ()
{
    int n;
    cout<<"How many objects you need : ";
    cin>>n;

    citizen arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter name : ";
        cin>>arr[i].name;
        cout<<"Enter age : ";
        cin>>arr[i].age;
        cout<<endl;
    }

    cout<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Name is : "<<arr[i].name<<endl;
        cout<<"Age is : "<<arr[i].age<<endl<<endl;
    }

    return 0;
}