#include<cstdio>
#include<iostream>
#define N 10000
using namespace std;

int graph[N][N];

static int c = 0;

int dfsVisit(int n, int *visited, int u) {
    
    visited[u] = 1;
    int depth = 0;
    
    for(int i=0;i<n;i++) {
        if(graph[u][i] && !visited[i]) {
            if(depth > 1) {
                depth = 0;
                c++;
            }
            depth = dfsVisit(n, visited, i);
        }
    }
    depth++;
    //printf("depth : %d, count : %d\n", depth, c);
    return depth;
}

void dfs(int n) {
    
    int visited[n];
    int depth = 0;
    
    for(int i=0;i<n;i++) {
       visited[i] = 0;
    }
       
    for(int i=0;i<n;i++) {
        if(!visited[i]) {
           dfsVisit(n, visited, i);
           c++;
        }
    }
}

int main() {
    int t,n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        c = 0;
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++)
                graph[i][j] = 0;
        }
       // printf("%d\n", n);
        for(int i=1;i<n;i++) {
            int a, b;
            scanf("%d %d", &a,&b);
            graph[a][b] = 1;
            graph[b][a] = 1;
           // printf("%d %d\n", a, b);
        }
        
        dfs(n);
        printf("%d\n", c);
    }
    
    //system("pause");
    return 0;
}
