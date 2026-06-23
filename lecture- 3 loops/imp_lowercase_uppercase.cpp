#include<iostream>
using namespace std;
int main(){

    char ch;
    cout << "enter character";
    cin >> ch;

    if(ch >= 'a' && ch<='z'){
        cout << "lowercase";
    }
    else if(ch >= 'A' && ch<='Z'){
        cout << "uppercase";
    }
    else {
        cout << "not an alphabet \n ";
    }


    /*
    using ascii values -- this is implicit type conversion bcoz compiler char ko integer m chaneg kr rha hai
    and also bcoz memory me char uski ascii value store hoti hai isliye compiler char ko integer m convert kr rha hai
    if(ch >= 97 && ch<=122){
        cout << "lowercase";
    }
    else if(ch >= 65 && ch<=90){
        cout << "uppercase";
    }
    else {
        cout << "not an alphabet";
    }
    */

    //now for ternary statement

    int n = 45;
    cout << (n>=0 ? "positive" : "negative") << endl;
    return 0;
}