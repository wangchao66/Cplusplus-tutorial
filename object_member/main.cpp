#include <iostream>
#include "line.h"
using namespace std;

int main()
{
    Line *p=new Line(1,2,3,4);
    p->printInfor();
    cout<<sizeof(p)<<endl;
    cout<<sizeof(Line)<<endl;
    return 0;
}

