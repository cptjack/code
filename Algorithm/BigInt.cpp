#include<iostream>
#include<cstdio>
#include<string>
#define N 10000

using namespace std;

//typedef string BigInt;

class BigInt
{
      public:
             string i;
             BigInt()
             {
                     i="0";
             }
             void multiply(BigInt j);
             void divide(BigInt j);
             void sub(BigInt j);
             void add(BigInt j);
             void mod(BigInt j);
};

void BigInt::multiply()
{
     
}

int main()
{
    system("pause");
    return 0;
}
