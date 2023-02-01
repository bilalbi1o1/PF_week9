#include<iostream>
using namespace std;

int main()
{
    int n=0;
    int count=0;
    string name;
    cout<<"Enter line :";
    getline(cin,name);


    while(name[n] != '\0')
    {
        if((name[n]=='a') || (name[n]=='e') || (name[n]=='i') || (name[n]=='o') || (name[n]=='u') 
        || (name[n]=='A') || (name[n]=='E') || (name[n]=='I') || (name[n]=='O') || (name[n]=='U'))
        { 
        count++;
        }
        n++;
    }
    cout<<"Number of vowels are : "<<count;

}