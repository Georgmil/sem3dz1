
#include "clGraph.h"
#include "clNode.h"
#include "clCircle.h"
#include "math.h"


void clGraph::Show(){

    for(int j=1;j<=kol;j++){
        clN[j].Show();
    }

    for(int i=1;i<=kol;i++){
        for(int j=i;j<=kol;j++){
            if (matrica[((i-1)*kol)+j]!=0){
                clRebro(clN[i].Getx(),clN[i].Gety(),clN[j].Getx(),clN[j].Gety(),matrica[((i-1)*kol)+j]).Show();
            }
        }
    }




}

void clGraph::Dijikstra(){
    int file[100];
    int cost[20][20];
    int dist[20];
    int pred[20];
    int visited[20];
    int nextnode,shet,mindst,start=1,zap,t;


    for(int i=1;i<=kol;i++){
        for(int j=1;j<=kol;j++){
            if(matrica[((i-1)*kol)+j]==0){
                cost[i][j]=99999;}
            else{
                cost[i][j]=matrica[((i-1)*kol)+j];
            }
        }
    }
    for(int i=1;i<=kol;i++){
        dist[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }
    dist[start]=0;
    visited[start]=1;
    shet=1;

    while(shet<kol){
        mindst=99999;

        for(int i=1;i<=kol;i++){
            if(dist[i]<mindst&&!visited[i]){ // menshe i raven 0
                mindst=dist[i];
                nextnode=i;
            }
        }
        visited[nextnode]=1;// otmechaem chto mi ee positili
        for(int i=1;i<=kol;i++){
            if(!visited[i]){ //esli ne posetili
                if((mindst+cost[nextnode][i])<dist[i]){
                    dist[i]=mindst+cost[nextnode][i];
                    pred[i]=nextnode;
                }
            }
        }shet++;

    }

    for(int i=1;i<=kol;i++){
        if(i!=start){
            cout<<"\n Dlina puti do vershini " <<i<<"= "<<dist[i];
			cout<<"\nSamij karotkij put do etoj verhini = "<<i;
			t=i;
			do{
                zap=t;
                t=pred[t];
                setlinestyle(0,0,1);
                setcolor(YELLOW);
                line(clN[t].Getx(),clN[t].Gety(),clN[zap].Getx(),clN[zap].Gety());


                cout<<"<- "<<t;
			}
			while(t!=start);
        }
    }



}


clGraph::clGraph()
{
    int width=650,height=400;
    int centerw=width/2,centerh=height/2,radius=centerw/2;
    int g=0;
    float radian, angle;
    fstream fs;
    fs.open("file1.txt",fstream::in);
    if(fs.is_open()){
    }
    while(!fs.eof()){
        fs>>matrica[g];
        g++;
    }
    kol=matrica[0];

    fs.close();

    cout<<"\n\n";

    radian=360/kol;


    for(int i=1;i<=kol;i++){
        angle=radian*(i-1)*M_PI/180;
        clN[i]=clNode(radius*(cos(angle))+centerw,-radius*(sin(angle))+centerh,i);

    }


}
clGraph::~clGraph()
{
    delete[] clN;
    //cout << "~clGraph()\n";
    delete[] matrica;

}
