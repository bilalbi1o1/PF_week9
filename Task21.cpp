#include<iostream>
using namespace std;

int main()
{
    int num;
    int arr1[2];

    for(int n=0 ; n<2 ; n++)
    {
        cout<<"Enter value for array 1 :";
        cin>>arr1[n];
    }

    cout<<"Enter number of values in 2nd array: ";
    cin>>num;

    int arr2[num];

    for(int n=0 ; n<num ; n++)
    {
        cout<<"Enter value for array 2 :";
        cin>>arr2[n];
    }

    for(int n=0 ; n<2 ; n++)
    {
        cout<<arr1[n]<<",";

        if(n != 0)
        break;

        for(int i=0 ; i<num ; i++)
        {
        cout<<arr2[i]<<",";
        }
    }

}