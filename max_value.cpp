#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;

    cout<<"Enter value of a,b,c: ";
    cin>>a>>b>>c>>d;

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<a<<" is greatest value.";
            }
        }
    }

    else if(b>c)
    {
        if(b>d)
        {
            cout<< b <<"is greatest value.";
        }
    }

    else if(c>d)
    {
        cout<< c <<"is greatest value.";
    }

    else
    {
        cout<< d <<"is greatest value.";
    }
}