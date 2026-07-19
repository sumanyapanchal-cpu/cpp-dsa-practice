#include <iostream>
#include <vector>
using namespace std;
//brute force approach-

vector<int> sumPair(vector<int> vec, int target_value) //return type is vector<int> imp
{
    vector<int>ans; //this is to store the indexes of the pairs bcoz agar ye store vec k ander
    //krte toh problem- vec = 2,7,11,15 and usme push back krte 0 and 1 (indexes of 2 and 7)
    // toh vector ban jata 2 7 11 15 0 1 (last m ye do values add hogyi and since call by reference me isme alag se & lgana pdta hai nd isme & nh h toh ye call by value hojata and vec ki value same rhti 2 7 11 15) isliye alag se ans banaya
    //jiske ander jo 2 indexes store hoge without actually changing the original vector.
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == target_value)
            {

                ans.push_back(i);
                ans.push_back(j);
                return ans; //this returns the indexes as soon as they're found
            }
        }
    }
    return ans; //returns empty vector if no pair exists
}

int main()
{
    vector<int>vec = {2,7,11,15};
    int target = 9;

    vector<int> result = sumPair(vec,target);
    
    cout << result[0] << "," << result[1] << endl;
    return 0;
}