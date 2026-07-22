#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target)
{
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        // now to check ki left half sorted hai ya right half-

        if (nums[st] <= nums[mid]) // means left half sorted hai left sorted hai toh left pr BS apply kro
        { 
            if (nums[st] <= target && target <= nums[mid])  // target ki value st and mid k bich m hai kya?
            {                  //search space bana 3,4,5,6 since isme left half sorted hai
                end = mid - 1; // left hand sorted ki BS ki condn
            }
            else // agar right sorted hai toh else case
            {                 
                st = mid + 1; // agar right sorted hai to BS ki ye condition hogi
            }
        }
        else
        { // right sorted hai toh target search kro 
            if (nums[mid] <= target && target <= nums[end])
            { // BS on right sorted
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int>vec = {3,4,5,6,7,0,1,2};
    cout << search(vec,0) << endl;
    return 0;
}