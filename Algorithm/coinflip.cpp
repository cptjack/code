#include<iostream>

int main()
{
    int i,n,g,q;
    int t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&g);
              while(g--)
              {
                        scanf("%d %d %d",&i,&n,&q);
                        if(n%2 == 0)
                        {
                             printf("%d",n/2);
                        }
              
                        else
                        {
                            if(i==q)
                               printf("%d",n/2);
                     
                            else
                               printf("%d",(n/2)+1);
                        }
                        printf("\n");
              }
    }
    return 0;
}
