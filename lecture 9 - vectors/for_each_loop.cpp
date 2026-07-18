#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> vec = {5,2,3};
    for(int i : vec){
        cout << i << endl; //ye line sara hi vector ka data print krdegi
        //bcoz idhar iterator i,j etc ye sb inndex pr rkhi hui value ko store krte hai na ki index ko
    }

    vector <char> vec2 = {'a' , 'b' , 'c' };
    for(char i: vec2){
        cout << i << endl;
    }

    return 0;
}