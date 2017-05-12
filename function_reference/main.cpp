#include <iostream>

using namespace std;

int fun(int &x,int &y);
int main()
{
    int x=10;
    int y=20;
    fun(x,y);
    cout<<x<<','<<y<<endl;
    return 0;
}

int fun(int &x, int &y)
{
    int z=0;
    z=x;
    x=y;
    y=z;
    return 0;
}
