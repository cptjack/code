#include<iostream>
#include<cstdio>

using namespace std;

int addition(int a,int b)
{
    return (((a&b)<<1)|(a^b));
}

int main()
{
    int sum = 0;
    sum = addition(12,3);
    printf("%d\n",sum);
    system("pause");
    return 0;
}
