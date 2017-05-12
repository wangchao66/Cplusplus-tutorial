#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    //student();
    student(string name="jims",int age=9,int maxNum=150);
    void setName(string names);
    string getName();
    int setAge(int age);
    int getAge();
    int getMAX();
private:
    string names;
    int ages;
    const int maxNums;
};

#endif // STUDENT_H
