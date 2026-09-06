#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string revString(string s1)
{
    int n = s1.length();
    string ans = ""; //no space no nothing se init kra hai
    reverse(s1.begin() , s1.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while(i < n && s1[i] != ' ') //space ek char hai jiske liye single comma use kre h
        {
            word += s1[i];
            i++;
        }
        reverse(word.begin() , word.end());
        if(word.length() > 0) //means word is not just random empty space
        {
            ans += " " + word;
        }
    }

    return ans.substr(1); //means indexing 1 se shuru kro to avoid the extra space in beginning , complete logic in nb
    
}

int main() 
{
    string str = "the pen";
    cout << revString(str) << endl;

    return 0;
}