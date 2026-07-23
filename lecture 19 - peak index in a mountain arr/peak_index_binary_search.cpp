#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> vec)
{
    int st = 1, end = vec.size() - 2;

    while (st <= end)
    {
        int mid = st + (end-st)/2;
        if (vec[mid - 1] < vec[mid] && vec[mid] > vec[mid + 1])
        {
            return mid;
           
        }
        if (vec[mid - 1] < vec[mid])
        {                 // increasing slop pr lie krta hai mid
            st = mid + 1; // right half ko search space banao
        }
        else
        {
            end = mid - 1;
        }
        
    }
    return -1;
}
int main()
{
    vector<int>nums = {0,3,8,9,5,2};
    cout << peakElement(nums) << endl;
    return 0;
}