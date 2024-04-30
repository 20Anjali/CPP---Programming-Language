#include<iostream>
using namespace std;
#define n 10

int main()
{
    int a[n] = {1,2,3,4,5};
    int b[n] = {1,2,3,4,5};
    int add[n] = 0;

    for(int i=0;i<=5;i++)
    {
        int add[n] = a[i] + b[i];
    }
    cout<<add[n];
}