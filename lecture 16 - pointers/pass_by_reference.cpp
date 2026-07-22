#include<iostream>
using namespace std;

int change_a(int* ptr){
    *ptr = *ptr * 5;
    return *ptr;
}


int main(){
    
    int a = 10;
    change_a(&a); //hum function call me address pass krege upr jakr wo address deref hojyga
    cout << a << endl;

    return 0;
}