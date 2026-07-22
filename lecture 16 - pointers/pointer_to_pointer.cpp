#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl; 
    int * ptr = &a;
    int ** ptr2 = &ptr;

    // dono niche wali lines ka output same hoga- 

    cout << &ptr << endl; //ye hai ptr ka khud ka address not the address of a that is stores
    cout << ptr2 << endl; //ptr 2 stores the address of ptr hence ptr2 ki value = address of ptr i.e &ptr

    int * ptr3 = NULL;
    cout << ptr3 << endl; // 0 hogya since kuch store hi nahi kra
    cout << *ptr3 << endl; // 0 as well
    return 0;

    /*LOGIC- in notebook
    and derefering nb se dekhlo khud hi
    */
}