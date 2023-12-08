// In this program i code setter and getter function to access private data members.

#include <iostream>
using namespace std;
class cars
{
    string color;

public:
    string name;
    int model;

    void set_color(string col)
    {
        color = col;
    }

    void get_color()
    {
        cout << color;
    }
};
int main()
{
    int n;
    cout << "how many objects you want to find : ";
    cin >> n;

    cars arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name : ";
        cin >> arr[i].name;
        cout << "Enter model : ";
        cin >> arr[i].model;
        string color;
        cout << "Enter color : ";
        cin >> color;
        arr[i].set_color(color);
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Name is : " << arr[i].name << endl;
        cout << "Model is : " << arr[i].model << endl;
        cout << "Color is : ";
        arr[i].get_color();
        cout << endl << endl;
    }

    return 0;
}