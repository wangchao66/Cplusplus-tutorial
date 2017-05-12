#include <iostream>
#include "coord.h"
using namespace std;

int main()
{
    Coord coord[3];
    coord[0].m_ix=3;
    coord[0].m_iy=5;
    cout<<"coord "<<coord[0].m_ix<<" "<<coord[0].m_iy<<endl;

    Coord *p=new Coord[3];
    p[0].m_ix=20;
    p->m_iy=10;
    p[1].m_ix=5;
    p[1].m_iy=6;
    p[2].m_ix=7;
    p[2].m_iy=8;
    for(int i=0;i<3;i++){
        cout<<p[i].m_ix<<","<<p[i].m_iy<<endl;
    }
    delete []p;
    p=NULL;
    return 0;
}

