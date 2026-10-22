#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int,int>m;
        vector<int>ans; //to store both index and return
        for(int i = 0; i< nums.size(); i++)
        {
            int first = nums[i];
            int second = tar - first;
            if(m.find(second) != m.end()) //means if value of second found
            {
                ans.push_back(i); //index of 1st and key
                ans.push_back(m[second]); // value
                //hence creating a key value pair in ans vector
                break; //if hogya to break ya return krdo (kuch bh kr skte ho dono me se)
            }
            //if not so then 
            m[first] = i; //key value store krlo for further iter
        }
        return ans;
    }

int main()
{
    vector<int> nums = {7, 11, 2, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl; 
    return 0;
}