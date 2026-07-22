#include<iostream>
using namespace std;

void change_a(int &b){
    b = 20;
}
int main(){
    int a = 10;
    change_a(a);
    cout << a << endl;
    return 0;
}