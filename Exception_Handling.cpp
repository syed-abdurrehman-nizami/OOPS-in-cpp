// Exception handling in C++ is a mechanism for managing runtime errors, allowing a program to catch and handle
// exceptions (unexpected events or errors) without crashing. It uses the `try`, `catch`, and `throw` keywords
// to define blocks of code where exceptions might occur, handle them, and throw exceptions, respectively.
// This ensures that the program can recover from errors gracefully.

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    try
    {
        if (age >= 18)
        {
            cout << "You can drive." << endl;
        }
        else
        {
            throw(age);
        }
    }

    catch (int age)
    {
        cout << "Yon can't drive" << endl;
    }

    cout << "Enter two numbers to divide : ";
    int num1, num2;
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0)
        {
            throw(num2);
        }

        else
        {
            cout << "Answer is : " << num1 / num2;
        }
    }

    catch (int n)
    {
        cout << "You not allowed to divide because you enter 0." << endl;
    }

    return 0;
}