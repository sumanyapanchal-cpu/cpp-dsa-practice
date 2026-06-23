#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;

    unsigned int x = -10;
    cout << x << endl; //will show error and show garbage value
    return 0;
}