#include<iostream>
using namespace std;

int main()
{
    string word;
    int n;

    cout<<"Enter string: ";
    cin>>word;

    n = word.length();

    for(int i = n ; i >= 0 ; i--)
    {
        cout<<word[i];
    }    
}