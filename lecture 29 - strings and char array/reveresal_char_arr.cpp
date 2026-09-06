#include<iostream>
#include<string>
#include<cstring> // used bcoz strlen function is defined in this header file
using namespace std;

int main(){
    char str[] = "hello";
    int n = strlen(str); //strlen function is used to calculate the length of the string since ye char array h and c me bh whi hota hai

    int st = 0, end = n-1;
    while(st <= end){
        swap(str[st] , str [end]);
        st++;
        end--;
    }
    cout << str << endl; //it will print the reversed string of the char array

    return 0;
}