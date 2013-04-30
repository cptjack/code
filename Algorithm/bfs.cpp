#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#define N 5
using namespace std;

class Vertex
{
      public:
             int d;
             int parent;
             enum color {white,grey,black};
};

class Graph
{
      public:
             Vertex vertex[N];
             int adj[N][N];
             void initialize()
             {
                  adj[][] = {{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}};
             }
};

void bfs(Graph G,Vertex s)
{
     for(int i=0;i<N;i++)
     {
          G.vertex[i].d=0;
          G.vertex[i].parent=0;
          G.vertex[i].color=white;
     }
     s.d=0; s.parent=0; s.color=grey;
     Queue<int> Q;
     Q.push(s);
     Vertex u;
     int i=0;
     while(!Q.isempty())
     {
              u=Q.front();
              Q.pop();
              for(int j=1;j<N;j++)
              {
                      if(G.adj[i][j] == 1)
                      {
                             Q.push(G.vertex[j]);
                             G.vertex[j].color = grey;
                      }         
              }
              G.vertex[i].color = black;
              i++; 
     }
}

int main()
{
    Graph G;
    G.initialize();
    bfs(G,G.vertex[0]);
    system("pause");
    return 0;
}
