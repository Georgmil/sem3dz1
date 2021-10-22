#include "clNode.h"
#include "clRebro.h"
#include "clGraph.h"
#include <fstream>

using namespace std;

void f(clDraw *q){
    q->Show();
}

int main()
{


    int width=650,height=400;
    clGraph a;
    initwindow(width,height);

    f(&a);
    outtext("Nazhimite na ekran i zatem lubuju klavishu, chtobi zaputit algoritm dejikstra");
    getch();
    a.Dijikstra();
    getch();
    closegraph();
    cout<<endl<<endl;
    return 0;
}
