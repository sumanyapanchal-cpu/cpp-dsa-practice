#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; //found, mtlb i return kra mtlb wo kis index p h wo bta do 
        }
    }
    return -1; // not found to -1 dedo
    
}
int main(){

    int arr[5] ={8,10,12,15,20};

    cout << linearSearch(arr, 7, 15) << endl;

    return 0;
}