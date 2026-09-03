#include<iostream>
#include<algorithm> // next permuatation is present in algorithm header file
using namespace std;

int main(){
    string s = "abc";
    next_permutation(s.begin() , s.end()); //this will give the next permutation of the string
    cout << s << endl; //output = acb
    return 0;
}