#include<iostream>
using namespace std;

int maxH2O(int height[], int n){
    int maxWater = 0;
    int lp =0 , rp = n-1;
    while(lp < rp){
        int width = rp-lp;
        int ht = min(height[lp],height[rp]);    
        int area = width * ht;  
        maxWater = max(area, maxWater);
        /*if(height[lp] < height[rp]){
            lp++;
        }
        else{
            rp--;
        }*/
       lp < rp ? lp++ : rp--; //easier way to if else
    }
    return maxWater; 
    }
    

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(height[0]);
    cout << maxH2O(height,n) << endl;
    return 0;
}