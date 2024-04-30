#include<iostream>
using namespace std;

int main()
{
    int i = 0;

    i = i++;
    cout<<i<<endl;

    int  j = ++i;
    cout<<i<<" "<<j<<endl;

    int  k = i--;
    cout<<i<<" "<<k<<endl;

    int l = --i;

    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;

    return 0;

}