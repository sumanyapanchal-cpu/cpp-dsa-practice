#include<iostream>
#include<vector>
using namespace std;

/*LOGIC-
ISS CODE KI TC = O(N SQAURE) ISSE BETTER TPH LINEAR SEARCH HAI JISME
arr[i-1] ! = arr[i] && arr[i] 1= arr[i+1] YE LAGAO TOH TC = O(N) HOJYGI AND BETTER
*/

int search(vector<int>vec){
    for (int i = 0; i < vec.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == vec[i])
            {
                count ++;
            }
            
        }
        if(count == 1){
            return vec[i];
        }
        
    }
    return -1;
}

int main(){
    return 0;
}
