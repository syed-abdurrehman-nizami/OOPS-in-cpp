// In this program i make three classes. class first is base class for class second and
// class second is base class for class third and it is called mutilevel inheritance.

#include<iostream>
using namespace std;
class first {
    protected:
        int rollno; 
    public:
        void setdata(int);
        void getdata(void);       
};
void first :: setdata(int n)
{
    rollno = n;
}
void first :: getdata(void)
{
    cout<<"Roll no is : "<<rollno<<endl;
}

class second : public first {
    protected:
        float physics;
        float chemistry; 
        float math;
    public:
        void setmarks(float,float,float);
        void getmarks(void);
};
void second :: setmarks(float n1,float n2,float n3)
{
    physics = n1;
    chemistry = n2;
    math = n3;
}
void second :: getmarks()
{
    cout<<"Marks of physics : "<<physics<<endl;
    cout<<"Marks of chemistry : "<<chemistry<<endl;
    cout<<"Marks of math : "<<math<<endl;
}

class third : public second{
    protected:
        float percentage;
        void calulate(void);
    public:
        void display(void)
        {
            getdata();
            getmarks();
            calulate();
            cout<<"Percentage is : "<<percentage;
        }
};
void third :: calulate()
{
    percentage = (physics+chemistry+math)/3;
}

int main()
{
    third a;
    a.setdata(45);
    a.setmarks(12.5,34.0,56.5);
    a.display();
    
    return 0;
}