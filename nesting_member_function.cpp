// Nesting of member functions in C++ refers to the practice of defining a member
// function inside another member function within a class. This allows the inner
// function to access the private members of the class and is a way to organize 
// and encapsulate functionality within the class structure.

#include<iostream>
#include<string>
using namespace std;
class number {
    private:
        string binary_number;
    public:
        void get_data(void);
        void check_binary(void);
        void ones_complement(void);
        void display_data(void);

};
void number :: get_data(void)
{
    cout<<"Enter a binary number : ";
    cin>>binary_number;
    check_binary();
}
void number :: display_data(void)
{
    cout<<"The numebr is : "<<binary_number<<endl;
}
void number :: check_binary (void)
{
    for(int i=0;i<binary_number.length();i++)
    {
        if(binary_number.at(i) != '0' && binary_number.at(i) != '1')
        {
            cout<<"Your number is not a binary number.";
            exit(0);
        }
    }
    cout<<"Your number is a binary number."<<endl;
    display_data();
    ones_complement();
}
void number :: ones_complement(void)
{
    cout<<"Now take ones complement."<<endl;
    for (int i = 0; i < binary_number.length(); i++)
    {
        if(binary_number.at(i) == '0')
        {
            binary_number.at(i) = '1';
        }
        else
        {
            binary_number.at(i) = '0';
        }
    }   
    display_data();
}

int main()
{
    number a1;
    a1.get_data();
    
    return 0;
}