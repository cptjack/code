#include<iostream>
#include<cstdio>
#define N 30001
using namespace std;

int main()
{
    float value;
    int a[N];
    int coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    for(int i=0;i<N;i++)
       a[i] = 0;
    a[5] = 1;
        for(int i=10;i<N;i=i+5)
        {
                for(int j=0;j<11;j++)
                {
                        if(i/2 >= coin[j])
                        {
                                 a[i] = a[i] + 2 * a[coin[j]];
                                 //i = i - coin[j];
                        }
                }
        }
    
    while(value!= 0.00)
    {
        scanf("%f",value);
        
        
    }
    system("pause");
    return 0;
}
