#include<iostream>
#include<string> //optional with iostream since usme strings hote hai
#include<algorithm> //used bcoz reverse function is defined in this header file
using namespace std;

int main()
{
    string str1 = "aakash";
    reverse(str1.begin() , str1.end()); //this is a function which is defined in string header file and it takes two iterators as input and reverses the string
    cout << str1 << endl; //it will print the reversed string of the string
    return 0;
}