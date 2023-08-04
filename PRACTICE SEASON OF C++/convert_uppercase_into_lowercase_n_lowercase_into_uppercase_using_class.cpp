/*Wap program to convert character uppercase into lowercase or lowercase into uppercase using class.*/
#include<iostream>
using namespace std;

class CharConverter 
{
    public:
        char toLower(char ch) 
        {
            if (ch >= 'A' && ch <= 'Z') 
            {
                return ch + 32;
            }
            return ch;
        }

        char toUpper(char ch) 
        {
            if (ch >= 'a' && ch <= 'z') 
            {
                return ch - 32;
            }
            return ch;
        }
};

int main() 
{
    char inputChar;
    CharConverter converter;

    cout<<"Enter a character: ";
    cin>>inputChar;

    if(inputChar >= 'A' && inputChar <= 'Z') 
    {
        char lowerCase = converter.toLower(inputChar);
        cout<<"Lowercase of "<<inputChar<<" is: "<<lowerCase<<endl;
    } 
    else if (inputChar >= 'a' && inputChar <= 'z') 
    {
        char upperCase = converter.toUpper(inputChar);
        cout<<"Uppercase of "<<inputChar<<" is: "<<upperCase<<endl;
    } 
    else 
    {
        cout<<"Invalid character. Please enter an alphabet."<<endl;
    }

    return 0;
}