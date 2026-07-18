#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec; //0
    
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl; //5
    cout << vec.capacity() << endl; //8 (EXPLAINATION IN NOTEBOOK)
    return 0;
}