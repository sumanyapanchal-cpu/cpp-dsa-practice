#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int sum = 0;
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        int first = nums[i];
        for(int j=i+1; j<n; j++)
        {
            int second = nums[j];
            sum = first + second;
            if(sum == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
            }
        }
        return ans;
    }
    


int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}