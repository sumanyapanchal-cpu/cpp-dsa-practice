#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec, int tar)
{
    int st = 0, end = vec.size() - 1;
    while (st <= end)
    {
        int mid = (st + (end-st)) /2; //mid bhi ek index hai nd why this formula? see in optimisation 
        //until that consider mid = st + end /2 only 
        if (tar > vec[mid])
        {
            st = mid + 1;
        }
        else if (tar < vec[mid])
        {
            end = mid - 1;
        }
        else if (tar == vec[mid])
        {
            return st; // returns index but isme st ki jgh mid bh likh skte ho since mid is also the index
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {0, -1, 3, 4, 5, 9, 12};
    cout << binarySearch(vec, 12) << endl; // returns 6 as wo index hai
    cout << binarySearch(vec, 12) << endl; // returns 6 as wo index hai jispr 12 hai
    return 0;
}