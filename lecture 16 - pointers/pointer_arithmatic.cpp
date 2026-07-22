#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    /*cout << ptr << endl; //last me 08 aagya
    ptr ++;
    cout << ptr << endl;*/ //last me c aaya verify?? since hexadecimal me 1-9 k baad abcdef aata hai toh +4 bytes k hisab se 8 se 9,a,b,c isliye last me c aagya hence verified

    cout << ptr << endl; //last me 08 aagya
    ptr = ptr + 2; //2 int --> 8bytes add hoge
    cout << ptr << endl; 

    int arr[] = {1,2,3,4,5};

    cout << *arr << endl; //print 1 since arr = &arr[0]
    cout << *(arr+1)<< endl; //prints 2 since next 4 bytes krke next ibdex p travel krke uski value dega and so on

    int * a1; //say 100 hai address pointing
    int * a2 = a1 + 2; //108

    cout << a2-a1 << endl; //ans 2 dega logic in nb

    cout << (a1<a2) << endl; //true hai toh prints 1 logic in nb
    

    return 0;

}