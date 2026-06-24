#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>vec, int size, int target){ //ek vector of integer type and ek target input hoga
    cout << "the index on which target is found is: " << endl;
    for (int i = 0; i < size; i++)
    {
        if(vec[i] == target){
            return i; //if found return i
            break;
        }
    }
    return -1; //if not found return -1
}
int main(){
    vector<int>vec = {1,2,3,4,5};
    int size = 5;
    int target = 3;

    cout << linearSearch(vec,size,target) << endl;
    return 0;
}