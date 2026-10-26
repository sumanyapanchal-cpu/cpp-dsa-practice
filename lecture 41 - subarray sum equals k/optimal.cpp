#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        vector<int>prefixSum(n,0);
        prefixSum[0] = arr[0];

        //logic to calculate prefix sum
        for(int i = 1; i<n; i++) //1 se isliye shuru kra since 0 ka to arr 0 fix krdiya
        {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        //now to calculate count- 
        unordered_map<int,int>m; // ps with freq store
        for(int j = 0; j<n; j++)
        {
            if(prefixSum[j] == k) count++ ;
            //if not equal then cal ps[j] - k jisko hum yaha val kehre h
            int val = prefixSum[j] - k;

            if(m.find(val) != m.end()) // i.e agar ye value phle se map me mil gyi to-
            {
                count += m[val]; //mtlb map me jo freq stpred h uss value ki uski count me add krdo
                //map me map_name[variable] aise do to wo uski freq return krta hai naturally
            }

            if(m.find(prefixSum[j]) == m.end()) //means agar map me exist nh krti val to prev prefix sum ko store krwao next map me, isliye agar prev prefix sum nahi mila map me to find kro usko nhi mila to freq = 0 krke store krwa de
            {
                m[prefixSum[j]] = 0; //that is uski freq 0 se init krdi agar new h to
            }

            m[prefixSum[j]]++; //that is agar 0 hai to 1 hojygi and agar kuch aur h say 1 to update hokr 2 hojygi that is ++ same and ye upr wale if se bahar h to init krne k baad 1st time aane wale elem ki bh freq by the end of upper if wo 1 ho hi jygi 


        }
        return count;
    }
 

int main()
{
    vector<int> arr = {9,4,0,20,3,10,5};
    int k = 33;
    int result = subarraySum(arr, k);
    cout << result << endl;
    return 0;
}