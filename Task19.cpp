#include<iostream>
using namespace std;

int main()
{
    int count;
    int smallest;
    cout<<"Enter how many numbers you want to enter :";
    cin>>count;

    int number[count];

    for(int n=0;n<count;n++)
    {
        cout<<"Enter a number :";
        cin>>number[n];
    }
    smallest = number[0];

    for(int n=1;n<count;n++)
    {
        
        if(smallest > number[n])
        {
        smallest = number[n];
        }
    }
    cout<<"Smallest number is :"<<smallest;
}