#include <iostream>
#include <vector>
#include <algorithm> //sort function k liye
using namespace std;

int majority_element(vector<int> vec, int size)
{
    sort(vec.begin(), vec.end()); // taki array sorted ho jaye
    int freq = 1;
    int ans = vec[0]; // let ki 1st element is Majoority element

    for (int i = 1; i < size; i++)
    {
        if (vec[i] == vec[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = vec[i]; // to reset the new term as the answer
        }
        if (freq > size / 2)
        {
            return ans;
        }
    }

    return ans;
}
int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    cout << majority_element(vec, 5) << endl;
    return 0;
}