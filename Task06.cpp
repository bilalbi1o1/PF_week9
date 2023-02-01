#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    float avg=0;


    int number[5] = {1,2,3,4,5};

    for(int n=0;n<5;n++)
    {
        sum = sum + number[n] ;
    }
    avg = sum/5;

    cout<<"Sum is :"<<sum<<endl;
    cout<<"Average is :"<<avg;
}