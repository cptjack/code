#include<iostream>
#include<cstdio>
#define N 100
using namespace std;

bool isUniqueCharArray(char *array)
{
    int checker = 0;
    for(int i=0;array[i]!='\0';i++)
    {
        printf("%d\n",(checker & (1 << array[i])));
        if((checker & (1 << array[i])) > 0) return false;
        checker |= (1 << array[i]);
        //printf("%d\n",checker);
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
      
      printf("%s","abc%20xyz");
    system("pause");
    return 0;
}
