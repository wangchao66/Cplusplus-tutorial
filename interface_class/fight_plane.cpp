#include "fight_plane.h"
#include <iostream>
using namespace std;

Fight_plane::Fight_plane(int code):Plane(code)   //子类继承的初始化只能用初始化列表
{
}

Fight_plane::~Fight_plane(){
    cout<<"~fight_plane()"<<endl;
}
void Fight_plane::fly(){
    cout<<"Fight_plane::fly()"<<endl;
}

void Fight_plane::fight(){
    cout<<"fight()"<<endl;
}

