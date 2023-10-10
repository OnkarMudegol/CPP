#include<iostream>
using namespace std;
class Student
{
    protected:
    int roll_no;
    public:
    void get_no(int);
    void put_no(void);
};
void Student :: get_no(int a)
{
    roll_no=a;
}
void Student :: put_no(void)
{
    cout<<"\nRoll number: "<<roll_no<<endl;
}
class Test : public Student{
    protected:
    float part1, part2;
    public:
    void get_marks(float,float);
    void put_marks(void);
};
void Test :: get_marks(float x, float y)
{ part1=x; part2=y;}
void Test :: put_marks()
{
    cout<<"Part 1: "<<part1<<endl;
    cout<<"Part 2: "<<part2<<endl;
}
class Sports
{
    protected:
    float score;
    public:
    void get_score(float);
    void put_score(void);
};
void Sports :: get_score(float s)
{
        score =s;
}
void Sports :: put_score(void)
{
        cout<<"Sports score: "<<score<<endl;
}
class result : public Test, public Sports{
    float total;
    public:
    void display(void);
};
void result :: display(void)
{
    total = part1+part2;
    put_no();
    put_marks();
    put_score();
    cout<<"Total Score: "<<total;
}
int main()
{
    result student1;
    student1.get_no(102);
    student1.get_marks(80.0,98.5);
    student1.get_score(6.6);
    student1.display();
    return 0;
}