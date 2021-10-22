#include "clLine.h"


void clLine::Show(){

line(x0,y0,x1,y1);

}

clLine::clLine(int x01, int y01,int x11,int y11):x0(x01),y0(y01),x1(x11),y1(y11)
{
//cout <<x0<<"clLine(int x01, int y01,x11,y11);\n";
}

clLine::~clLine()
{
    //cout <<x0 <<"~clLine();\n";
}
