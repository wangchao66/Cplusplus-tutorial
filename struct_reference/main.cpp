#include <iostream>

using namespace std;

typedef struct
{
    int x;
    int y;
}coord;



int main()
{
    coord c;
    coord &c1=c;
    c1.x=10;
    c1.y=20;
    cout<<c.x<<','<<c.y<<endl;
    return 0;
}

