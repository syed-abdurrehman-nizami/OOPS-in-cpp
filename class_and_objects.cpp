// IN this program i simply make a student class and make its objects and print it.

#include <iostream>
using namespace std;
class student {
    public:      // access specifier 
    string name;
    int age;
    char section;
};
int main()
{
    student a;  // a is object
    a.name = "hamza israr";
    a.age = 23;
    a.section = 'A';

    student b;
    b.name  = "tayyab shahid";
    b.age = 21;
    b.section = 'B';

    cout<<"First member"<<endl;
    cout<<a.name<<endl<<a.age<<endl<<a.section<<endl;
    cout<<endl;
    cout<<"Second members"<<endl;
    cout<<b.name<<endl<<b.age<<endl<<b.section<<endl;

    return 0;
}