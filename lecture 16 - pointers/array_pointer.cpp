#include<iostream>
using namespace std;

int main(){
    int arr[] = {100,2,3,4,5};
    /*

    int * ptr = arr; //automatically points to arr[0]
    cout << *ptr << endl; //prints 1 
    
    */
    cout << arr << endl; //arr is stored as pointer isliye this is gonna give a address why in nb
    cout << *arr << endl;

    int a = 10, b = 15;
    int * ptr = &a;
    ptr = &b;


    return 0;
}