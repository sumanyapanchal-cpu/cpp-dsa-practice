#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) // mid ko change krke hi max allow pages likha hai
{
    int students = 1, pages = 0;
    for (int i = 0; i < arr.size(); i++) //O(n) ka loop hai ye total TC calculated in line 42
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{ //& arr used taki call by ref ho ske but with alias
    if (m > n)
    {
        return -1;
    }
    int sum = 0; // phle sum nikalna pdega using the for loop like so

    for (int i = 0; i < arr.size(); i++) //O(n)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum; // range of possible answers

    while (st <= end) //O(log range) since this is binary search ka loop but since this loop is also calling is valid that is O(n) hence total tc is O(log range * n) ye hai final ans
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,1,3,4} ;
    int n = 4;
    int m = 2;
    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}