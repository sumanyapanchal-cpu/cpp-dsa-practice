#include <iostream>
#include <vector>
using namespace std;
//brute force approach-

vector<int> sumPair(vector<int> vec, int size, int target_value) //return type is vector<int> imp
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] + vec[j] == target_value)
            {

                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }
    return vec;
}

int main()
{
    vector<int>vec = {2,7,11,15};
    int target = 9;

    sumPair(vec,4,9);
    cout << vec[0] << " ," << vec[1]; //since index 0 and 1 ka sum 9 hai 
    return 0;
}