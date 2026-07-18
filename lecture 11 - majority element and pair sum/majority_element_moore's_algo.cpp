#include <iostream>
#include <vector>
using namespace std;

int moore(vector<int> vec, int size)
{
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }

        if (ans == vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for(int value : vec){
        if (value == ans)
        {
            count ++;
        }
        
    }

    if(count > size/2){
        return ans;
    }
    else{
        return -1;
    }
    
    return ans;
}

int main()
{
    vector<int>vec = {1,2,2,1,1};
    cout << moore(vec,5) << endl;
    return 0;
}