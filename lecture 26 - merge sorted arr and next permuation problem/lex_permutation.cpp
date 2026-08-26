#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int> &vec)
{
    int n = vec.size();
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) // to find the pivot element phle
    {
        if (vec[i] < vec[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1) // then reverse the array only as it is
    {
        reverse(vec.begin(), vec.end());
        return;
    }

    for (int i = n - 1; i > pivot; i--) // to find the right most element
    {
        if (vec[i] > vec[pivot])
        {
            swap(vec[i], vec[pivot]);
            break;
        }
    }

    /*EASIER WAY TO DO THIS IS MENTIONED BELOW
    int i = pivot + 1; // this is to reverse the last digits of an array
    int j = n - 1;
    while (i <= j)
    {
        swap(vec[i], vec[j]);
        i++;
        j--;
    } */
   reverse(vec.begin() + pivot + 1, vec.end()); //since shuru se reverese nh krna pivot + 1 se krna hai iskliye aise likha
}

int main()
{
    vector<int> vec = {1, 2, 3};
    permutation(vec);
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}