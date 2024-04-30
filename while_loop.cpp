#include<iostream>
using namespace std;

int main()
{
    int num,Total_num,max;

    cout<<"Enter Total_num: ";
    cin>>Total_num;
    cout<<"Enter numbers: ";
    cin>>num;
    
    max = num;

    while(num != Total_num)
    {
        if(num > max)
        {
            max = num;
        }
        cin>>num;
    }
    cout<<max<<" is largest number.";
}