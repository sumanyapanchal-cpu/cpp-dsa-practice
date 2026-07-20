#include<iostream>
#include<vector>
using namespace std;

vector<int> array_product(vector<int>nums){

    vector<int>ans;
    for(int i =0; i<nums.size() ; i++){
        int product = 1;
        for(int j = 0; j<nums.size() ; j++){
            if(i != j){
                product *= nums[j];

            }
        }
        ans.push_back(product);

    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>ans = array_product(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}