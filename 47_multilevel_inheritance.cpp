#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "Enter the roll number " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result Prabhat;
    Prabhat.set_roll_number(63);
    Prabhat.set_marks(91.0, 92);
    Prabhat.display_result();
    return 0;
}