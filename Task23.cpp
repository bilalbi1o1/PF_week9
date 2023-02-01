#include<iostream>
using namespace std;

int main()
{
    string S1="something ";
    string S2;

    cout<<"Enter string you want to connect : ";
    getline(cin,S2);

    cout<<S1<<S2;
}