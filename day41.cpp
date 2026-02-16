// ****CODE EXAMPLE DEMONSTRATING VIRTUAL BASE CLASS IN C++ ****

#include <iostream>
using namespace std;
/*
inheritance:
student--->test
student--->test
test--->result
sport--->result
*/
class student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "your roll number is" << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here:" << endl
             << "maths:" << maths << endl
             << "physics:" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "your PT score is" << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is " << total << endl;
    }
};

int main()
{

    result vanshu;
    vanshu.set_number(440);
    vanshu.set_marks(89, 87);
    vanshu.set_score(8);
    vanshu.display();

    return 0;
}
