#include <iostream>
#include "infrantry.h"
using namespace std;

void test1(Person p){
    p.play();
}
void test2(Person &p){
    p.play();
}
void test3(Person *p){
    p->play();
}

int main()
{
    Infrantry infrantry("merry",20);
    Person p1=infrantry;

    test1(infrantry);
    test2(infrantry);
    test3(&infrantry);
    cout<<p1.name<<endl;
}

