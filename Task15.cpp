#include<iostream>
using namespace std;

int main()
{
    int count;

    cout<<"Enter how many numbers you want to enter :";
    cin>>count;

    int number[count];

    for(int n=0;n<count;n++)
    {
        cout<<"Enter a number :";
        cin>>number[n];
    }
    for(int n=count-1 ; n>=0 ; n--)
    {
        cout<<number[n]<<endl;
    }
}