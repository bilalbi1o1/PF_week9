#include<iostream>
using namespace std;

int main()
{
    string word;
    int n=0;

    cout<<"Enter string: ";
    cin>>word; 

    while(word[n] != '\0')
    {
        if((word[n] == 'a') || (word[n] == 'A'))
        {
            word[n] = 'b';
        }
        else if((word[n] == 'b') || (word[n] == 'B'))
        {
            word[n] = 'c';
        }
        else if((word[n] == 'c') || (word[n] == 'C'))
        {
            word[n] = 'd';
        }
        else if((word[n] == 'd') || (word[n] == 'D'))
        {
            word[n] = 'e';
        }
        else if((word[n] == 'e') || (word[n] == 'E'))
        {
            word[n] = 'f';
        }
        else if((word[n] == 'f') || (word[n] == 'F'))
        {
            word[n] = 'g';
        }
        else if((word[n] == 'g') || (word[n] == 'G'))
        {
            word[n] = 'h';
        }
        else if((word[n] == 'h') || (word[n] == 'H'))
        {
            word[n] = 'i';
        }
        else if((word[n] == 'i') || (word[n] == 'I'))
        {
            word[n] = 'j';
        }
        else if((word[n] == 'j') || (word[n] == 'J'))
        {
            word[n] = 'k';
        }
        else if((word[n] == 'k') || (word[n] == 'K'))
        {
            word[n] = 'l';
        }
        else if((word[n] == 'l') || (word[n] == 'L'))
        {
            word[n] = 'm';
        }
        else if((word[n] == 'm') || (word[n] == 'M'))
        {
            word[n] = 'n';
        }
        else if((word[n] == 'n') || (word[n] == 'N'))
        {
            word[n] = 'o';
        }
        else if((word[n] == 'o') || (word[n] == 'O'))
        {
            word[n] = 'p';
        }
        else if((word[n] == 'p') || (word[n] == 'P'))
        {
            word[n] = 'q';
        }
        else if((word[n] == 'q') || (word[n] == 'Q'))
        {
            word[n] = 'r';
        }
        else if((word[n] == 'r') || (word[n] == 'R'))
        {
            word[n] = 's';
        }
        else if((word[n] == 's') || (word[n] == 'S'))
        {
            word[n] = 't';
        }
        else if((word[n] == 't') || (word[n] == 'T'))
        {
            word[n] = 'u';
        }
        else if((word[n] == 'u') || (word[n] == 'U'))
        {
            word[n] = 'v';
        }
        else if((word[n] == 'v') || (word[n] == 'V'))
        {
            word[n] = 'w';
        }
        else if((word[n] == 'w') || (word[n] == 'W'))
        {
            word[n] = 'x';
        }
        else if((word[n] == 'x') || (word[n] == 'X'))
        {
            word[n] = 'y';
        }
        else if((word[n] == 'y') || (word[n] == 'Y'))
        {
            word[n] = 'z';
        }
        else
        {
            word[n] = 'a';
        }

        cout<<word[n];
        n++;
    }

}