#include<iostream>
#include<cstdio>

using namespace std;

int binary_search(int a[],int key,int first,int last)
{
    if(first<last)
    {
                  int middle = (last+first)/2;
                  if(key < a[middle])
                      return binary_search(a,key,first,middle-1);
                  else if(key > a[middle])
                      return binary_search(a,key,middle+1,last);
                  else if(key == a[middle])
                      return middle;
                  else return 0;
    }
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    cout<<binary_search(a,9,0,10)<<endl;
    system("pause");
    return 0;
}
