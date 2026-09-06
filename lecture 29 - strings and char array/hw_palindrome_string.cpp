#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str){
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    if (str == reversedStr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}

int main()
{
    string s1 = "racecar";
    isPalindrome(s1);
    return 0;
}
