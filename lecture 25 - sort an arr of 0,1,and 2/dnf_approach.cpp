#include <iostream>
#include <vector>
using namespace std;

void dnf(vector<int> &vec)
{
    int n = vec.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (vec[mid] == 0)
        {
            swap(vec[low], vec[mid]);
            low++;
            mid++;
        }
        else if (vec[mid] == 1)
        {
            mid++;
        }
        else
        { // 2 ka case hai ye
            swap(vec[high], vec[mid]);
            high--;
        }
    }
}

void printArray(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    dnf(vec);
    printArray(vec);
    return 0;
}