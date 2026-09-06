#include <iostream>
#include <string>
// #include<cctype> for isalnum (but somehow it still works without that as well)
using namespace std;

// isalnum = function that checks for us ki alpha num hai ya nahi koi bh character else
// handwritten logic for the same is pasted in comment blow end me

bool isPalindrome(string str)
{
    int st = 0, end = str.length() - 1;
    while (st < end)
    {
        if (!isalnum(str[st]))
        {
            st++;
            continue;
        }
        if (!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[st]) != tolower(str[end]))
        {
            cout << "not palindrome";
            return false;
        }
        else
        {
            st++;
            end--;
        }
    }
    cout << "palindrome hai";
    return true;
}

int main()
{
    string s = "Ac3?e3c&a";
    isPalindrome(s);
    return 0;
}

/*normal logic without is alnum
#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch)
{
    if(ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z' )
    {
        return true;
    }
    return false;
}

bool isPalindrome(string str)
{
    int st = 0, end = str.length() - 1;
    while(st < end)
    {
        if (! isAlphaNum(str[st]) )
        {
            st ++;
            continue;
        }
        if (! isAlphaNum(str[end]) )
        {
            end --;
            continue;
        }
    if(tolower(str[st]) != tolower(str[end]))
    {
        cout << "not palindrome";
        return false;
    }
    else
    {
        st ++;
        end --;
    }
    }
    cout << "palindrome hai";
    return true;
}

int main()
{
    string s = "Ac3?e3c&a";
    isPalindrome(s);
    return 0;
}*/