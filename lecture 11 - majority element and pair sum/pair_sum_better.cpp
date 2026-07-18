#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPair(vector<int> vec, int target_value) //return type is vector<int> imp
{

    vector<int>ans; //since jo vector enter krwaya usme indexes push back nahi kroge islye
    int n = vec.size();
    int i =0, j= n-1;

    while(i<j){
        int pair_sum = vec[i] + vec [j];

        if(pair_sum > target_value){
            j--;
        }
        else if(pair_sum < target_value){
            i++;
        }
        else{ //case for pairsum = target
            ans.push_back(i); //ans me push back at 0th index
            ans.push_back(j); //ans me push back at 1st index
            return ans;
        }
    }

}

int main()
{
    vector<int>vec = {2,7,11,15};
    int target = 13;

    cout << vec[0] << "," << vec[2] << endl; //isse wo number aayge print hokr jinki value add krke 13 ayge i.e 2 and 11

   
   vector<int>ans = sumPair(vec,target); //yye banaya taki wo value nhi but indexes show ho ske
   //and upr funciton me ans vector banaya tha jisme push back 2 hi value kri thi, ek 0 and 1 position pr isliye isme ans[2] likhne pr garbage value aaygi
   //and vec pr vec[2] likhne pr sahi value aygi

    
    cout << ans[0] << " ," << ans[1]; //since index 0 and 2 ka sum 13 hai 
    return 0;
}