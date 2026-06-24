//reversal using 2 pointer method (vimp) iska thoery is in notebook

#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while (start < end) //isko <= bh krdoge odd/even dono consider krte hue to bh koi dikkat nahi h 
    {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    
}

int main(){

    int arr[4] = {1,2,3,4};
    reverseArray(arr,4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}