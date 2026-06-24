#include<iostream>
#include<vector>
#include<climits>


using namespace std;

// output 15 hi aayga pr idk vs code me run kyu nh hora

int kadane(vector<int>vec, int size){ //vector liya bcoz leetcode p vector hi kehte h array ko bhi
    int current_sum= 0;
    int max_sum = INT_MIN;
    //for (int i = 0; i < size; i++) -wont work with vector since vector p for each loop chalta hai 
    for(int value:vec)
    {
        current_sum += value; //isme vector[value] nhi likha since vector me for each loop me index uski value darshata hai na ki index
        max_sum = max(current_sum,max_sum);

        if (current_sum < 0)
        {
           current_sum = 0;
        }
        
    }
    return max_sum;

}
int main(){
    vector<int>vec = {1,2,3,4,5,-1};
    cout << kadane(vec,6) << endl;

    return 0;
}