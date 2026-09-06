#include <iostream>
#include <string>
using namespace std;

string removeOccurance(string s, string part)
{
    
    while (s.length() > 0 && s.find(part) < s.length())
    { // mtlb jb tk string 0 na hojaye ya fir jb tk part exist krta h tb tk since agar part nh hoga to s.fine(part) will give garbage value greater than the len of string

        s.erase(s.find(part), part.length()); // delete krege agar valid hai to
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurance(s,part) << endl;
    return 0;
}