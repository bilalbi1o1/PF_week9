#include<iostream>
using namespace std;

int main()
{
    int count;
    int num;

    cout<<"Enter how many numbers you want to enter :";
    cin>>count;
    cout<<"Enter number you want to multiply : ";
    cin>>num;

    int number[count];

    for(int n=1;n<=count;n++)
    {
        cout<<"Enter a number :";
        cin>>number[n];
    }

    for(int n=1;n<=count;n++)
    {
        number[n] = number[n]*num;
    }
    
    for(int n=1;n<=count;n++)
    {
        cout<<number[n]<<endl;
    }
}