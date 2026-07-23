#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> arr)
{
    int st = 0, end = arr.size() - 1;

    if (arr.size() == 1)
    {
        return arr[0];
    }

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == 0 && arr[0] != arr[1])
        {
            return arr[0]; // since mid is arr[0] only
        }

        if (mid == arr.size() - 1 && arr[arr.size() - 1] != arr[arr.size() - 2])
        {
            return arr[arr.size() - 1]; // since mid idhar last index hi hai
        }

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        { // to check ki kahi mid hi toh single element nh h
            return arr[mid];
        }

        if (mid % 2 == 0)
        { // even case

            if (arr[mid] == arr[mid - 1])   // <-- == not =
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        // ❌ don't return here
        // Binary Search ko multiple iterations chahiye
    }

    return -1;
}

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout << singleElement(nums) << endl;

    return 0;
}