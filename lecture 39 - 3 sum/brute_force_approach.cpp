#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans; //to store all the triplet valyes

        set<vector<int>> s; //set hai of vector of integer vals
        for(int i = 0; i<n; i++)
        {
            int a = nums[i];
            for(int j = i+1; j<n; j++)
            {
                int b = nums[j];
                for(int k = j+1; k<n; k++)
                {
                  int c = nums[k];
                    if(a+b+c == 0)
                    {
                        vector<int>trip = {a,b,c}; //that is ek triplet vec bana k usme a,b,c store
                        //and sort this triplet vec now
                        sort(trip.begin() , trip.end());

                        //now agar a+b+c == 0 to hai but ye value phle exist nh krti new banani h to
                        if(s.find(trip) == s.end()) //means triplet exist nh krta abhi already set me
                        {
                            s.insert(trip);
                            ans.push_back(trip);
                        }
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