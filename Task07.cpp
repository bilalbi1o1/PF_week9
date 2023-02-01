#include<iostream>
using namespace std;

int main()
{
    string word;
    char letter;
    bool isFound = false ;

    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter the character you want to found: ";
    cin>>letter;

    for(int n=0 ; word[n] != '\0' ; n++)
    {
        if(word[n] == letter)
        {
            isFound = true;
            break;
        }
    }

    if(isFound)
    cout<<letter<<" is found in "<<word;
    else
    cout<<letter<<" is not found in "<<word;
}