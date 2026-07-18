#include<iostream>
using namespace std;

int maxSubArray(int arr[], int size){
    int max_sum;

    for (int st = 0; st < size; st++)
    {
        int current_sum = 0; //ye har baat i =0 se i=1 k liye har baar reset krna hai for the outer most for loop isliye aise hi rkh diya loop k ander
        for (int end = st; end < size ; end++)
        {
            current_sum += arr[end]; //ye ye kehra hai ki end of an subarray wala element add krdo to the previous sum taki har bar alag se new sum calculate na krna pde
            max_sum = max(current_sum,max_sum);
        }
        
    }
    return max_sum;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout << maxSubArray(arr,5) << endl; //gives ans = 15 bcoz max subarray possible is 1+2+3+4+5 only. 
    //try with -ve numbers as well

    return 0;
}