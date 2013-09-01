#include<iostream>
#include<cstdio>
#include<algorithm>
#define N 10
using namespace std;
//Time : O(N) , space : O(1)
int getMaxDiff(int *a) {
    int i=0,j=1;
    int diff = 0;
    int maxDiff = 0;
    while(j<N) {
        diff = 0;
        if(a[i] < a[j])
          diff = a[j] - a[i];
        maxDiff = max(maxDiff, diff);
        if(a[i] > a[j])
           i = j;
        j++;
    }
    
    return maxDiff;
}

int main() {
    int a[] = {9, 20, 35, 4, 5, 6, 7, 8, 18, 0};//{10,9,8,7,6,5,4,3,2,1};//{8,4,3,4,5,6,14,16,9,10};
    int result = getMaxDiff(a);
    printf("%d\n", result);
    system("pause");
    return 0;
}
