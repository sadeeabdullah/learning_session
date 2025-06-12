#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student karim = Student("karim", 12, 'A', 98, 5);
    Student rahim = Student("rahim", 15, 'A', 99, 5);
    Student fahim = Student("fahim", 17, 'A', 97, 5);

    Student top_scorer = karim;

    int maximum = max(max(karim.math_marks, rahim.math_marks), fahim.math_marks);

    if (karim.math_marks == maximum)
    {
        top_scorer = karim;
    }
    else if (rahim.math_marks == maximum)
    {
        top_scorer = rahim;
    }
    else
    {
        top_scorer = fahim;
    }

    cout << top_scorer.name;
    return 0;
}