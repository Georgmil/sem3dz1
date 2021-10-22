#ifndef CLREBRO_H
#define CLREBRO_H

#include "clLINE.h"
#include <cstdlib>


class clRebro : public clLine
{
    public:
        clRebro(int x01,int y01,int x11,int y11,int num0);
        virtual ~clRebro();

        char *Getnum() { return num; }
        void Setnum(int val) { itoa(val,num,10); }  //переообразование целого числа в массив чаров



        void Show();

    private:
        char *num;
};

#endif // CLNODE_H

