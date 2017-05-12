#include <iostream>
#
#include "array.h"
using namespace std;
/*
 * deep copy is for pointers,
 * else copy object will have the same addess
 * author:wangchao
 * date:2016.5.1
*/

int main()
{
    Array arr1;
    Array arr2=arr1;
    cout<<arr2.getX()<<endl;
    arr1.printAddY();
    arr2.printAddY();
    for(int i=0;i<arr1.m_iX;i++){
    cout<<arr1.m_pY[i]<<endl;
    }
    for(int i=0;i<arr2.m_iX;i++){
    cout<<arr2.m_pY[i]<<endl;
    }
    return 0;
}

