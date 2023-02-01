#include<iostream>
using namespace std;

int main()
{
    string word;
    int n = 0;

    cout<<"Enter a word: ";
    cin>>word;

    while(word[n] != '\0')
    {
        cout<<"Location of "<<word[n]<<" is "<<n+1<<endl;
        n++;
    }
}