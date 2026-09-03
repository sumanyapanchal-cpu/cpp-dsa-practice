#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

    int arr[5] = {1,8,9,10,15};
    
    sort(arr, arr+5);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec = {1,8,9,10,15};
    //to sort this vec in descending order-
    sort(vec.begin() , vec.end() , greater<int>());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    sort(v.begin() , v.end()); //this sorting is default done by the 1st element of the pair, if the 1st elements are equal then it will sort by the 2nd element of the pair
    for(auto p : v){
        cout << p.first << " " << p.second << endl;
    }
   
    return 0;
}