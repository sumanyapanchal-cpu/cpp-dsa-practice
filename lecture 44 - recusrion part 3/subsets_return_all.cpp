#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int>& nums , vector<int>& ans , int i, vector<vector<int>> &allSubsets)
{
    if(i == nums.size())
    {
       //store subsets-
       allSubsets.push_back({ans});
        return;
    }
    //inclusion- 
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allSubsets);

    ans.pop_back();
    //exclusion- 
    getAllSubsets(nums,ans,i+1,allSubsets);
}
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getAllSubsets(nums,ans,0,allSubsets);
        return allSubsets;
    }

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> allSubsets = subsets(nums);
    for(auto subset : allSubsets)
    {
        for(int val : subset)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}