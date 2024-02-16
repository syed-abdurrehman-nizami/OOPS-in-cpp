//  A virtual base class in C++ is like a special blueprint that helps other blueprints
//  (classes) share certain things without making duplicates. It ensures that shared things
//  are only stored once, saving space and keeping things organized.

#include<iostream>
using namespace std;
class student {
    protected:
        int rollno; 
    public:
        void set_rollnumber(int r)
        {
            rollno = r;
        }
        void print_rollnumber()
        {
            cout<<"Roll number is : "<<rollno<<endl;
        } 
};
class part1 : virtual public student{
    protected:
        float math,english,urdu;
    public:
        void set_part1_marks(float x,float y,float z)
        {
            math = x;
            english = y;
            urdu = z;
        }

        void print_part1_marks()
        {
            cout<<"Part 1 marks."<<endl;
            cout<<"Marks of math : "<<math<<endl;
            cout<<"Marks of english : "<<english<<endl;
            cout<<"Marks of urdu : "<<urdu<<endl;
            cout<<endl;
        }       
};
class part2 : virtual public student{
    protected:
        float math2,english2,urdu2;
    public:
        void set_part2_marks(float x,float y,float z)
        {
            math2 = x;
            english2 = y;
            urdu2 = z;
        }

        void print_part2_marks()
        {
            cout<<"Part 2 marks."<<endl;
            cout<<"Marks of math : "<<math2<<endl;
            cout<<"Marks of english : "<<english2<<endl;
            cout<<"Marks of urdu : "<<urdu2<<endl;
            cout<<endl;
        }       
};
class Result : public part1, public part2{
    protected: 
        float total;  
    public:
        void print_result()
        {
            total = math + math2 + english2 + english + urdu2 + urdu;
            print_rollnumber();
            print_part1_marks();
            print_part2_marks();
            cout<<"Total marks : "<<total<<endl;
            cout<<"----------------------------------------------"<<endl<<endl;
        }       
};
int main()
{
    Result o1,o2;

    o1.set_rollnumber(10);
    o1.set_part1_marks(22.5,30,28.5);
    o1.set_part2_marks(12.5,18.5,20);
    o1.print_result();

    o2.set_rollnumber(20);
    o2.set_part1_marks(10.5,12,13.5);
    o2.set_part2_marks(14.5,18.5,21.5);
    o2.print_result();
    
    return 0;
}