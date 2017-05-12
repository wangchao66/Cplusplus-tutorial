#include <iostream>
#include "fight_plane.h"
using namespace std;

void flyMatch(Flyable *f1,Flyable *f2){
    f1->fly();
    f2->fly();
}

int main()
{
    Fight_plane plane1(1);
    Plane           plane2(3);
    flyMatch(&plane1,&plane2);

    return 0;
}

