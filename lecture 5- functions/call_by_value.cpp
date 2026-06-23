#include<iostream>
using namespace std;


int sum(int x, int y){
    x= x+10; //this will be 5+10=15
    y= y+10; //4+10=14
    return (x+y); //hence function call krke print krwaoge toh 15+14=29 dega but values in main function won't change
}
int main(){
    int x=5, y=4;
    cout << sum(x,y) << endl; //29 print
    cout << x << endl; //5 since call by value hai toh values change nahi hogi
    cout << y << endl; //4
    return 0;
}