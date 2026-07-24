#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int cows, int minDist)
{
    int count = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= minDist)
        {
            count++;
            lastPos = stalls[i]; 

            if (count == cows)
            {
                return true;
            }
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int n, int cows)
{
    sort(stalls.begin(), stalls.end());

    int st = 1;
    int end = stalls[n - 1] - stalls[0]; // end = last(n-1) - st(arr[0])
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(stalls, n, cows, mid))
        {
            ans = mid;
            st = mid + 1;   // maximize minimum distance
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 3;

    cout << aggressiveCows(stalls, stalls.size(), cows) << endl;

    return 0;
}