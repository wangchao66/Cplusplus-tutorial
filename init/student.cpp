#include "student.h"
#include <iostream>
using namespace std;

/*student::student()
{
    names="jims";
    ages= 10;
    cout<<names<< ages << endl;
}
*/
student::student(string name, int age,int maxNum):names(name),ages(age),\
    maxNums(maxNum)
{

    cout<<"student(string name, int age)"<<endl;
}

void student::setName(string name){
     names=name;
}
string student::getName(){
    return names;
}

int student::setAge(int age){
    ages=age;
}

int student::getAge(){
    return ages;
}
int student::getMAX(){
    return maxNums;
}
