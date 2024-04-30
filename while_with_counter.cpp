#include<iostream>
using namespace std;
int maiin()
{
    int counter = 5;

    while(counter != 0) 
    {
        cout << "I am an awesome program" << endl;
        counter--;
    }
 
 // OR
    while(counter) 
    {
        cout << "I am an awesome program" << endl;
        counter--;
    }

//OR
    while(counter--)
        cout << "I am an awesome program" << endl;
}