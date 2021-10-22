#include "clRebro.h"

void clRebro::Show(){
    clLine::Show();
    float pointx=(Getx1()+Getx0())*0.5, pointy=(Gety0()+Gety1())*0.5;
    outtextxy(pointx,pointy,num);


}

clRebro::clRebro(int x01,int y01,int x11,int y11, int num0):clLine(x01,y01,x11,y11), num(new char[4])
{

    Setnum(num0);
    //cout <<Getx0()<<"clRebro(int x0,int y0, int num0);\n";




}

clRebro::~clRebro()
{
    //cout << Getx0()<< "~clRebro();\n";
}

