#include<iostream>
using namespace std;

int maxH2O(int height[] , int n){
    int maxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1; j<n; j++){
            int width = j-i;
            int ht = min(height[i],height[j]);
            int area = width * ht;
            maxWater = max(area, maxWater);
        }
    }
    return maxWater;
}

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(height[0]); // divide by 4 byte taki actual size de na ki bits/byte wala
    cout << maxH2O(height,n) << endl;
    return 0;
}