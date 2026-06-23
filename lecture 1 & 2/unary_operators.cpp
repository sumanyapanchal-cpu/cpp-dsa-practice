#include<iostream>
using namespace std;

int main(){
     int a=10,b;

     b = a++;
     cout << "the value of b is =" << b << endl; //10 value print krega

    cout << "the value of a is =" << a << endl; //11 value print krega

    return 0;
}