#include<iostream>
using namespace std;

int main()
{
    float total=0;
    int num;

    cout<<"Enter number of resistences connected in series: ";
    cin>>num;

    float R[num];

    for(int n=0 ; n<num ; n++)
    {
        cout<<"Enter value of resistance :";
        cin>>R[n];

        total = total + R[n];
    }
    cout<<total<<" ohms";

}