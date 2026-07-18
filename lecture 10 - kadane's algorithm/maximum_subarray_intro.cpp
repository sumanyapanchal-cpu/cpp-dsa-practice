#include<iostream>
using namespace std;

// this program is to print all the subarrays of an array using nested loops

int main(){
    int n = 5;
    int arr[5] = {1, 2 ,3 , 4 , 5};
    //here st and end are indexes ko refer krte hue 

    for (int st = 0; st < n; st++) //from start shuru kro and end tk sara kuch access krlo
    {
        for (int end = st; end < n; end++) //since end start se hi shuru hoga bcoz one single element bh toh subarray ho skta hai isliye end = st se hi shuru kra hia 
        {
            for (int i = st; i <= end; i++) //this for loop is to actually print the array
            {
                cout << arr[i];
            }
            cout << " ";
            
            
        }
        cout << endl;
    }
    
    return 0;
}