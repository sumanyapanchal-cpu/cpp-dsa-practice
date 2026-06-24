#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1, 2 ,3 , 4 , 5};

    for (int st = 0; st < n; st++) //from start
    {
        for (int end = st; end < n; end++) //since end start se hi shuru hoga
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