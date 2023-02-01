#include<iostream>
using namespace std;

int main()
{
    string word;
    int n;

    cout<<"Enter string: ";
    getline(cin,word);

    n = word.length();

    if(n%2 == 0)
    cout<<"True";
    else
    cout<<"False";
}