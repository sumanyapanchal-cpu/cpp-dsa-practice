#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void optimised(vector<int> vec)
{
    int n = vec.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++) //O(n) time complexity for entire code and O(1) space complexity as we are not using any extra space for sorting the array
    //1st pass for for loop to check count variable
    {
        if(vec[i] == 0){
            count0++;
        }
        else if(vec[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int index = 0; //overwriting the original array with sorted values  
    //below for loops used as 2nd pass toh overwite isliye total 2 passes of for loops
    for(int i=0; i<count0; i++){
        vec[index++] = 0; //this is same as writing vec[index] = 0; index++; but this is more optimised way of writing it
    }
    for(int i=0; i<count1; i++){
        vec[index++] = 1;
    }
    for(int i=0; i<count2; i++){
        vec[index++] = 2;
    }
}

int main()
{
    vector<int> vec = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    optimised(vec);
    return 0;
}