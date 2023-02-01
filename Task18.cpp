#include<iostream>
using namespace std;

int main()
{
    int count;
    int largest;
    cout<<"Enter how many numbers you want to enter :";
    cin>>count;

    int number[count];

    for(int n=0;n<count;n++)
    {
        cout<<"Enter a number :";
        cin>>number[n];
    }
    largest = number[0];

    for(int n=1;n<count;n++)
    {
        
        if(largest < number[n])
        {
        largest = number[n];
        }
    }
    cout<<"Largest number is :"<<largest;
}