#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &arr, int n)
{
    if(n==1 || n==0)
    {
        return true;
    }
    return (arr[n-1] >= arr[n-2] && isSorted(arr , n-1)); //kuch nh likha mtlb ye h to true return kro
}

int main()
{
    vector<int>nums = {1,2,3,4,5};
    cout << isSorted(nums , nums.size()) << endl;
    return 0;
}