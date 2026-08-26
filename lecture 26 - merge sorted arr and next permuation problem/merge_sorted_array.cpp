#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int m, vector<int> &b, int n) //ye & bhut imp hai ye nahi lgaya toh niche wala arr print ka for loop run nhi krega and 123000 print krke dega ye alias pass by ref hai ye imp hai 
{
    int ind = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[ind] = a[i];
            i--;
            ind--;
        }
        else
        {
            a[ind] = b[j];
            j--;
            ind--;
        }
    }

    //next while loop is for the case when i-- hokr -ve hojata hai and j is still +ve (concept with example in notebook)
    while(j>=0){
        a[ind] = b[j];
        ind--;
        j--;
    }
}


    int main()
    {
        vector<int> a = {1,2,3,0,0,0};
        vector<int> b = {2,5,6};
        merge(a, 3, b, 3);
        //printArray(a);
        for(int i =0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        return 0;
    }