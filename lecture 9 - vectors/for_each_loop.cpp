#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> vec = {1,2,3};
    for(int i : vec){
        cout << i << endl;
    }

    vector <char> vec2 = {'a' , 'b' , 'c' };
    for(char i: vec2){
        cout << i << endl;
    }

    return 0;
}