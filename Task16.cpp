#include<iostream>
using namespace std;

int main()
{
    int count;
    int num;
    bool flag=false;

    cout<<"Enter how many numbers you want to enter :";
    cin>>count;

    int number[count];

    for(int n=0;n<count;n++)
    {
        cout<<"Enter a number :";
        cin>>number[n];
    }

    cout<<"Enter number you want to find : ";
    cin>>num;

    for(int n=0;n<count;n++)
    {
        if(number[n] == num)
        flag = true;
    }
    if(flag)
    cout<<"Already Entered";
    else
    cout<<"It is not entered before ";
}