/*Wap program to check weather a character is vowel or consonant using class.*/
#include<iostream>
#include<cctype>
using namespace std;

class CharChecker 
{
    public:
        bool isVowel(char ch) 
        {
            ch = tolower(ch);
            return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        }
};

int main() 
{
    char inputChar;
    CharChecker charChecker;

    cout<<"Enter a character: ";
    cin>>inputChar;

    if(isalpha(inputChar)) 
    {
        if(charChecker.isVowel(inputChar)) 
        {
            cout<<inputChar<<" is a vowel."<<endl;
        } 
        else 
        {
            cout<<inputChar<<" is a consonant."<<endl;
        }
    } 
    else 
    {
        cout<<"Invalid character. Please enter an alphabet."<<endl;
    }

    return 0;
}