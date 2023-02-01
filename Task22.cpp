#include<iostream>
using namespace std;

int main()
{
    float number[4];
    float num;
    float sum = 0;

    cout<<"Enter amount of true case : ";
    cin>>num;

    for(int n=0 ; n<4 ; n++)
    {
        cout<<"Enter a number : ";
        cin>>number[n];
    }

    number[0] = number[0]*0.25;
    number[1] = number[1]*0.10;
    number[2] = number[2]*0.05;
    number[3] = number[3]*0.01;

     for(int n=0 ; n<4 ; n++)
     {
        sum = sum + number[n];
     }

     if(sum>=num)
     cout<<"true";
     else
     cout<<"false";
}