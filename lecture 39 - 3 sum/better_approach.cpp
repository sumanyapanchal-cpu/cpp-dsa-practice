#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>>uniqueTrip; // to avoid repeatedness and to avoid duplicate triplets

        //start by selecting 1st value of a i.e nums[i]
        for(int i = 0; i<n; i++)
        {
            // int a = nums[i]; no need in code for understanding commented out
            int tar = -nums[i]; // bcoz b+c = -a = target and nums[i] is a here 
            set<int>s; // for further comparision unor set bh le skte the but not much diff in TC

            for(int j = i+1; j<n; j++) //second num also found
            {
                int third = tar - nums[j]; // i.e c = -a-b (tar = -a)

                if(s.find(third) != s.end()) // that is value hai phle se nahi h toh
                {
                    vector<int>trip = {nums[i], nums[j], third}; 
                    sort(trip.begin(), trip.end());

                    // Fixed: check whether triplet already exists
                    if(uniqueTrip.find(trip) == uniqueTrip.end()) //means exist nahi krta abhi, to
                    {
                        uniqueTrip.insert(trip);
                        ans.push_back(trip);
                    }
                }
                s.insert(nums[j]); // b ki value ko daldo s me wapis agar phle se nahi match to koi
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