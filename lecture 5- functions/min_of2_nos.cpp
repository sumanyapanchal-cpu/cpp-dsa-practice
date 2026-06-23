#include<iostream>
using namespace std;

int min2no(int a, int b){
    /*int min;
    if(a>b){
        min = b;
    }
    else{
        min = a;
    }
    return min; */

    if(a<b){
        return a;

    }
    else{
        return b;
    }
}

int main(){

    cout << "the value of min number is: " << min2no(34,69) << endl;
    return 0;
}