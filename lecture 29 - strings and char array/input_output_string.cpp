#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin >> str; 
    cout << str << endl; //it will print only the first word of the input string since cin stops reading after space

    string str2;
    // hence to get the whole line of input we can use getline function jiska syntak is diff from char arr ka getline
    getline(cin , str2, '#');
    cout << str2 << endl;
    return 0;
}