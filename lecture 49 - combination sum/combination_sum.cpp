#include<iostream>
#include<vector>
#include<set>
using namespace std;


    set<vector<int>> s;

    void getAllCombination(vector<int>& arr, int i,  int tar, vector<vector<int>> &ans, vector<int> &combin)
    {
        int n = arr.size();
        //base case
        if(i == n || tar < 0)
        {
            return;
        }
        if(tar == 0)
        {
            if(s.find(combin) == s.end()) //mtlb abhi set me nahi h combin
            {
                ans.push_back({combin});
                s.insert({combin});
            }
            
            return;
        }

        combin.push_back(arr[i]);
        //single - 
        getAllCombination(arr , i+1 , tar - arr[i] , ans , combin);
        //multi - 
        getAllCombination(arr , i , tar - arr[i] , ans , combin);
        combin.pop_back(); //backtrack before exclude
        
        //exclude- 
        getAllCombination(arr , i+1 , tar , ans , combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
         vector<vector<int>> ans;
         vector<int> combin;
         getAllCombination(arr , 0 , tar , ans , combin);
         return ans;
    }


int main()
{
    vector<int> arr = {2,3,5};
    int tar = 8;
    vector<vector<int>> ans = combinationSum(arr , tar);
    for(const auto& val : ans)
    {
        for(const auto& v : val)
        {
            cout << v << " ";

        }
        cout << endl;
    }
    return 0;
}