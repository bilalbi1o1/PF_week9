#include<iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    int n;

    cout<<"Enter string: ";
    cin>>word;
    cout<<"Enter the letter you want to match: ";
    cin>>letter; 

    n = word.length();

    if(word[n-1] == letter)
    cout<<"true";
    else
    cout<<"false";
}