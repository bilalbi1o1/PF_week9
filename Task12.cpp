#include<iostream>
using namespace std;


int main()
{
    string word;
    int n=0;

    cout<<"Enter string: ";
    cin>>word; 
    
    n = word.length();
    
    for(int i=0 ; i<=n ; i++)
    {
     for(char j='a' ; j<='z' ; j++)
     {
      if(word[i]==j)
      {
           if(j=='z')
           {
           cout<<"a";
           }
           else
           {
           j++;
           cout<<j;
           j--;
           }
      }
     }
    }
}