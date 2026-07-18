#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;

    unsigned int x = -10; //bcoz unsigned int only stores +ve values and not -ve hence produces a garbage value
    cout << x << endl; //will show error and show garbage value
    return 0;
}