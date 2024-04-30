#include<iostream>
using namespace std;

 int linear_search(int arr[], int num, int n)
 {
    for(int i=0; i<=n; i++)
    {
       if(arr[i] == num)
       {
        return i; 
       }
    }
    return -1;
 }

 int main()
 {
    int n;
    cin>>n;

    int num;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<=n; i++)
    {
        cin>>arr[i];
    }
     
    cout<<"Enter number: ";
    cin>>num;

    cout<<linear_search(arr, num, n)<<endl;

 }