// ****MULTILEVEL INHERITENCE DEEP DIVE CODE EXAMPLE IN C++ ****

#include <iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number(){
    cout<<"the roll number is"<<roll_number<<endl;
}

class exams: public student{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float , float);
    void get_marks(void);
};

void exams :: set_marks(float m1 , float m2){
    maths = m1;
    physics = m2;
}

void exams :: get_marks()
{
 cout<<"the marks obtained in maths are:  "<<maths<<endl;
cout<<"the marks obtained in physics are:"<<physics<<endl;
}


 
class result : public exams
{
    float percentage;

    public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "your result is" << (maths + physics) / 2 << "%" <<endl;
        }
};


int main()
{
    
    result vanshu;
    vanshu.set_roll_number(500);
    vanshu.set_marks(95 , 97);
    vanshu.display_results();

    return 0;
}
 /*
    NOTE:
     if we are inheriting b from a and c from b [A---->B----->C]
     1. a is the basic class for b and b is the basic class for c
     2. A--->B--->C is called inheritence path
    */

