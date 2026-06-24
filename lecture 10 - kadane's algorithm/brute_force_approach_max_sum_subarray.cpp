#include<iostream>
using namespace std;

int maxSubArray(int arr[], int size){
    int max_sum;

    for (int st = 0; st < size; st++)
    {
        int current_sum = 0;
        for (int end = st; end < size ; end++)
        {
            current_sum += arr[end];
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