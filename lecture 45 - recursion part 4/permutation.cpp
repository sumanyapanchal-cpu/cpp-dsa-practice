#include<iostream>
#include<vector>
using namespace std;

void getPermutation(vector<int> &nums , int idx ,  vector<vector<int>> &ans)
    //both nums and ans passed by reference bcoz dono me hi changes hore hai and we dont need to create copy
    {
        if(idx == nums.size()) //that is base case hit hogya
        {
            ans.push_back({nums}); //since nums k sare hi element push back krne h isliye usko new vector bana k pass krdiya
            //since ans is also a vector and nested vector bana k ab pass krdiya but agar
            // ans.push_back(nums) aise krte to bh koi dikkat nh h bcoz
            //Dono ka purpose same hai.
            //Important: Copy store hoti hai, reference nahi. Isliye jab hum baad mein original nums ko swap karenge, pehle se stored permutations change nahi hongi.
            return;
        }
        for(int i = idx; i<nums.size() ; i++)
        {
            swap(nums[idx] , nums[i]); //first swap to fix one element in its position that is idx = 0 pr 0th element fix, idx = 1 p 1st element fix and so on
            //Har recursive call ek position aage move kar raha hai.
            getPermutation(nums , idx+1 , ans); //idhar index place p i-th element ki choice lere hai
            swap(nums[idx] , nums[i]); //backtracking step bcoz humko humari choices undo krni h
        }

        //now just bcoz 1st rec me idx = 0 k liye run hogya and next rec call me hum idx+1 i.e idx = 2
        //pass krre hai isliye ab i = idx k hisab se for loop i = 1 and 2 pr hi run krega and 0 ko touch nh krega, aise wo fix hogyi
    }

    vector<vector<int>> permute(vector<int>& nums) { 
        //jb lc me jo parameter given h usse hi solve krna hai isliye kuch alag se parameter nh le skte isliye dusra fxn banaya hai

        vector<vector<int>> ans;
        getPermutation(nums , 0 , ans); //idhar idx ko 0 se init krdiya call k time 

        return ans;
    }

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = permute(nums);
    for(const auto& val : ans) //since nested vec hai isliye nested loop use krna pdega to cout
    {
        for(const auto& v : val)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}