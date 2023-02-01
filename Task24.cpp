#include<iostream>
using namespace std;

int main()
{
    string S1;

    cout<<"Enter string : ";
    getline(cin,S1);

    int n=0;
    while(S1[n] != '\0')
    {
        if((S1[n]=='a') || (S1[n]=='e') || (S1[n]=='i') || (S1[n]=='o') || (S1[n]=='u') 
        || (S1[n]=='A') || (S1[n]=='E') || (S1[n]=='I') || (S1[n]=='O') || (S1[n]=='U'))
        {
            n++;
            continue;
        } 
        cout<<S1[n];
        n++;
    }
}