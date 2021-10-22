#ifndef CLGRAPH_H
#define CLGRAPH_H
#include "clDraw.h"
#include "clNode.h"
#include "clRebro.h"




class clGraph : public clDraw
{
    public:
        clGraph();
        virtual ~clGraph();


        int kol;
        int *matrica=new int[100];




        clNode *clN=new clNode[20];




        void Show();
        void Dijikstra();



    //protected:

    private:


};

#endif // CLGRAPH_H

