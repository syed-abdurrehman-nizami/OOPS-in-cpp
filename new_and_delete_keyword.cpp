#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    cout<<"The address of a is : "<<p<<endl;
    cout<<"The value of a is : "<<*p<<endl<<endl;

    int *z =  new int(20);
    cout<<"The address of new variable is : "<<z<<endl;
    cout<<"The value of new variable is : "<<*z<<endl<<endl;
    delete z;

    int *y = new int(20);
    cout<<"The address of new variable is : "<<y<<endl;
    cout<<"The value of new variable is : "<<*y<<endl<<endl;
    delete y;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    cout<<"The address of arr is : "<<arr<<endl;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;
    delete[] arr;
    
    int *ar = new int[4];
    cout<<"The address of ar is : "<<ar<<endl;
    delete[] ar;
 
    return 0;
}