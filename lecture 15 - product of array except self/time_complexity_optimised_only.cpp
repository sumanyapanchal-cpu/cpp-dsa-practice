#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>nums) {
    int n = nums.size();
    vector<int>ans(n, 1); //mtlb n size hai and usme 1 fill krdo har n box me
    vector<int>prefix(n, 1); // prefix array initiliased by 1 everywhere taki grabage value na aaye and also multiply me 1 se frk nhi pdega
    vector<int>suffix(n, 1);

     
    // Calculate the prefix products
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    
    // Calculate the suffix products
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // Multiply prefix and suffix products
    for (int i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }
    
    return ans;
}

int main(){
    return 0;
}