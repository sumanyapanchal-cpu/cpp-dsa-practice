#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl; //0x61ff0c ye output aaya hai 
    int * ptr = &a;
    cout << ptr << endl; 
    cout << &a << endl; // ptr ya fir &a print krwao ek hi baat h since ptr = &a
    cout << *ptr << endl; //derefencing hogya
    cout << &ptr << endl; //this gives a diff value that stores the address of the ptr, mtlb ptr 
    //ptr khud jiss address pr stores hai ye wo address print krwayga and ye diff hoga
    return 0;
}