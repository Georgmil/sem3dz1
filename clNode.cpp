#include "clNode.h"

void clNode::Show(){
    clCircle::Show();
    outtextxy(Getx(),Gety(),num);


}

clNode::clNode():num(new char[4])
{
    //cout << "clNode();\n";
}

clNode::clNode(int x0,int y0, int num0):clCircle(x0,y0), num(new char[4])
{

    Setnum(num0);
    //cout <<Getx()<<"clNode(int x0,int y0, int num0);\n";




}

clNode::~clNode()
{
    //cout << Getx()<< "~clNode();\n";
}
