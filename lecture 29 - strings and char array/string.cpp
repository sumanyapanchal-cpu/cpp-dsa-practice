#include<iostream>
#include<string> //optional with iostream since usme strings hote hai 
using namespace std;

int main()
{
    string str1 = "sumanya";
    string str2 = " panchal";
    string str3 = str1 + str2; //concatenation of two strings
    cout << str3 << endl;

    cout << str1.length() << endl; //gives length of string str1

    string str4 = "hello";
    string str5 = "hello";

    cout << (str4 == str5) << endl; //gives 1 since both strings are equalx 
    //this above comparision is not possible in sucha  way in char array since usme humko loop lgakr ek ek element ko check krna ppdta

    string str6 = "aakash";
    cout << (str1< str6) << endl; //gives 1 since "sumanya" comes after "aakash" in dictionary order hence alphabetically aakash is bigger
    //iska ans 0 aayga since this is checking is str1 less than str6 and since sumanya comes after aakash hence it is not less than aakash hence 0 output 
    return 0;
}