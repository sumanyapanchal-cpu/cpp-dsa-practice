#include<iostream>
#include<vector>
using namespace std;

int main(){

    /*vector<int>vec; //initiall size = 0 since not initialised
    cout << vec[0]; //will give error since abhi vector khali h isliye segmentation fault

    */

    vector<int>vec = {1,2,3};
    cout << vec[0] << endl; //gives 1 since index 0
    return 0;
}