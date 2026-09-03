#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);  


    stack<int>s2;
    s2.swap(s); // s2 me s ka content aa gya and s empty ho gya to verify this print the sizes of both
    cout << "size of s:" << s.size() << endl; //0
    cout << "size of s2:" << s2.size() << endl; //3
    return 0;
}