#include <iostream>
#include <cstring>
#include "student.h"

int main()
{
    //student t1;
    student t2("Merry",7,100);
    //string str = t1.getName();
    // cout << str << endl;
    //cout << endl;
    // cout<<t1.getName()<<"\n"<< t1.getAge()<<endl;
    cout<<t2.getName()<<" "<<t2.getAge()<<" "<<t2.getMAX()<<endl;
    return 0;
}
