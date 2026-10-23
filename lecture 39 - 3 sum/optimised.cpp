#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    



    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++)
        {
            int j = i+1;
            int k = n-1;

            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while(j < k && nums[j] == nums[j-1])
                    {
                        j++;
                    }

                    while(j < k && nums[k] == nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }

    int main()
    {
        vector<int> nums = {-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = threeSum(nums);
        
        for(int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
