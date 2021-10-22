#ifndef CLCIRCLE_H
#define CLCIRCLE_H
#include "clDraw.h"


class clCircle : public clDraw
{
    public:
        clCircle();
        clCircle(int x0,int y0);
        virtual ~clCircle();

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }

         void Show();


    //protected:

    private:
        int x;
        int y;
        int r=20;
};

#endif // CLCIRCLE_H
