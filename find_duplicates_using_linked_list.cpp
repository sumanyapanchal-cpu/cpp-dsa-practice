#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow]; //+1
            fast = nums[nums[fast]]; //+2
        } while(slow != fast);

        slow = nums[0];

        // step 2-
        while(slow != fast)
        {
            slow = nums[slow]; //+1
            fast = nums[fast]; //+1
        }
        return slow; //can return fast as well sicne same value h dono ki hi
    }

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums) << endl;
    return 0;
}