#include<iostream>
#include<vector>
using namespace std;

void permString(string &str, int idx)
{
    if(idx == str.length())
    {
        cout << str << endl;
    }
    for(int i = idx; i<str.length(); i++)
    {
        swap(str[idx] , str[i]);
        permString(str , idx + 1);
        swap(str[idx] , str[i]); // Backtracking step
    }
}

int main()
{
    string str = "abc";
    permString(str, 0);
    return 0;
}