#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans; // jo bh return type ques m ho wo hi copy krke
                                 // name me bs ans daldiya
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n;) {

                int p = j + 1;
                int q = n - 1;
                while (p < q) {
                    long long sum =
                        (long long)nums[i] + (long long)nums[j] +
                        (long long)nums[p] +
                        (long long)nums[q]; // since sum can be large value
                                            // isliye long long
                    if (sum < target) {
                        p++;
                    } else if (sum > target) {
                        q--;
                    } else //(sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;

                        while (p < q && nums[p] == nums[p - 1]) {
                            p++; // since this is already calculated
                        }
                    }
                } // while loop closing now j ka optimisation at last after while loop run we will check for duplicates of j, 
                j++; //since j k for loop se j++ hataya reason h niche
                while (j < n && nums[j] == nums[j - 1]) {
                    j++;
                }
                //for se hataya nh to is upr j optimisation me j++ hai and upr jakr wapis j++ hojata isliye while k baad j++ likha and fir check kra condn if duplicate then j++ again and if not and fresh value to duplicate ki zrurat nh h isliye j++ phle hi krdiya after while loop
            }
        }
        return ans;
    }
int main() 
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);
    
    cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << " " << result[0][3] << endl;
    return 0;
}