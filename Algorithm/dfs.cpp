#include<iostream>
#include<cstdlib>
#define N 6
using namespace std;

int graph[N][N]={{0,1,0,1,0,0},
                 {0,0,0,1,1,0},
                 {0,0,0,0,1,1},
                 {1,1,0,0,1,0},
                 {0,0,1,1,0,0},
                 {0,0,1,0,0,0}};
int vertex[N];  
int path[N];

void dfs(int u)
{
     
     if(vertex[u])
        return;
     vertex[u] = 1;
     printf("%d ",u+1);
     for(int v=0;v<N;v++)
     {
        if((graph[u][v]) && (!vertex[v]))
        {
                  path[v] = u;
                  dfs(v);
        }
     }
}
  
int main()
{
    for(int i=0;i<N;i++)
    {
            vertex[i] = 0;
            path[i] = 0;
    }
    
    for(int i=0;i<N;i++)
    {
            if(!vertex[i])
            {   
                path[i] = i;
                dfs(i);
            }
    }
    
    dfs(vertex[0]);
    system("pause");
    return 0;
}
