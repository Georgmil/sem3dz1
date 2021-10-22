#ifndef CLLINE_H
#define CLLINE_H
#include "clDraw.h"


class clLine : public clDraw
{
    public:
        clLine(int x01,int y01,int x11,int y11);
        virtual ~clLine();

        int Getx0() { return x0; }
        //void Setx(int val) { x = val; }
        int Gety0() { return y0; }
        //void Sety(int val) { y = val; }
        int Getx1() { return x1; }
        //void Setx(int val) { x = val; }
        int Gety1() { return y1; }
        //void Sety(int val) { y = val; }



         void Show();


    //protected:

    private:
        int x0;
        int x1;
        int y0;
        int y1;
};

#endif // CLLINE_H
