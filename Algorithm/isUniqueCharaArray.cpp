#include<iostream>
#include<cstdio>
#define N 100
using namespace std;

bool isUniqueCharArray(char *array)
{
    int checker = 0;
    for(int i=0;array[i]!='\0';i++)
    {
        if((checker & (1 << array[i])) > 0) return false;
        checker |= (1 << array[i]);
    }
    return true;
}

int main()
{
    char array[] = "abcdefghb";
    bool t = isUniqueCharArray(array);
    if(t)
      printf("true\n");
    else
      printf("false\n");
    system("pause");
    return 0;
}
