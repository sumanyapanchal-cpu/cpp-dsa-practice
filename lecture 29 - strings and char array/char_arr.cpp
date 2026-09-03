#include<iostream>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c' ,'\0'}; //null character is used to terminate the string
    int arr[] = {1,2,3};

    cout << arr << endl; //since arr is a constant pointer to the first element isliye wo 1 ka address print krwa dega
    cout << str << endl; //since str is a character array and it is null terminated so it will print the string abc

    char str2[] = "hello world"; //spaces are also printed in the string and it is null terminated
    cout << str2 << endl; //since str2 is a character array and it is null terminated so it will print the string hello world
    
    return 0;
}