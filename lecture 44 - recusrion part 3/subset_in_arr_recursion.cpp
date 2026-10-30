#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> &arr , vector<int> &ans , int i)
//ans is passed by ref using & since agar by value pass krte to har baar copy create hoti
//and we dont want any copies to be created as such 
{
    if(i == arr.size())
    {
        for(int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    //include case
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1); //i+1 given for next index


    //exclude case
    ans.pop_back(); //backtrack
    printSubset(arr,ans,i+1); //i+1 given for next index
    

}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> ans; //to store subsets
    printSubset(arr, ans, 0);
    return 0;
}