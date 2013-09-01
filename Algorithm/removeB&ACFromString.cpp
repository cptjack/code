#include <iostream>
using namespace std;
#define ONE 1
#define TWO 2
#define NEWLINE printf("\n")
#define printInt(x) printf("%d", x)
#define printChar(x) printf("%c", x)
 
void stringFilter(char *str)
{
    int j = 0;
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
           j=i;
        if(str[i] == 'b')    
           str[i] = '0';
           
        if(str[j] == 'a' && str[i] == 'c') {
            str[i] = '0';
            str[j] = '0';
            if(j > 0 && str[j-1] == 'a')
                j = j-1;
        }
    }
    
    j=0;
    for(int i=0;str[i]!='\0';i++) {
        if(str[i] != '0') {
           str[j] = str[i];
           j++;
        } else {
            str[i] = '\0';
        }
    }
}
 
/* Driver program to check above functions */
int main()
{
    char str1[] = "ad";
    stringFilter(str1);
    cout << str1 << endl;
 
    char str2[] = "acbac";
    stringFilter(str2);
    cout << str2 << endl;
 
    char str3[] = "aaac";
    stringFilter(str3);
    cout << str3 << endl;
 
    char str4[] = "react";
    stringFilter(str4);
    cout << str4 << endl;
 
    char str5[] = "aa";
    stringFilter(str5);
    cout << str5 << endl;
 
    char str6[] = "ababaac";
    stringFilter(str6);
    cout << str6 << endl;
 
    system("pause");
    return 0;
}
