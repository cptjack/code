#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#define N 81

using namespace std;

int main()
{
    string str[N];
    int i=0;
    while(1)
    {
            cin>>str[i]; i++;
            if(str[i] == "#")
              break;
    }
        
    system("pause");
    return 0;
}
