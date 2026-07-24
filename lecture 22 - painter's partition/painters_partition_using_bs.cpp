#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr , int n, int m, int maxAllowedTime){ //mid ko hi max allowed time rename
    int painter = 1, time = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > maxAllowedTime)
        {
            return false;
        }
        if(time + arr[i] <= maxAllowedTime) //valid value hai toh add krdo
        {
            time += arr[i]; 
        } else{ //aisa nahi h toh naya painter chahiye
            painter++;
            time = arr[i];
        }
    }
    return painter>m ? false:true;
    
}

int painterPartition(vector<int>arr , int n, int m){
    int sum = 0, max_value = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        max_value = max(arr[i], max_value);
    }
    int st = max_value , end = sum;
    int ans = -1;
    while(st<=end)
    {
        if(m>n) //is painter zyda ho and blocks kam ho toh -1 return 
        {
            return -1;
        }
        
    int mid = st + (end-st)/2; 
    if(isPossible(arr,n,m,mid))
    {
        ans = mid;
        end = mid - 1;
    }   else {
        st = mid + 1;
    }
    
    }
    return ans;
}

int main(){
    vector<int>arr = {40,30,10,20};
    int n = 4, m = 2;
    cout << painterPartition(arr,n,m) << endl;
    return 0;
}