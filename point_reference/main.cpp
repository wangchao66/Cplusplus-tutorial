#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int *p=&a;
    int *&q=p;
    *q=5;
    cout<<a<<endl;
    return 0;
}

