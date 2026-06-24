#include<iostream>
using namespace std;

int change(int x){
    x = x*2;  
    return x; 
}

int main(){
    int a = 3;
    change(a);

    cout << a << endl;
}