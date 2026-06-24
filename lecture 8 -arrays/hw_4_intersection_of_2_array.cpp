#include<iostream>
using namespace std;

int intersection(int arr1[], int arr2[], int size1, int size2){
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << "\n";
            }
            
        }
    }
    cout << "frequency repeated: ";
    return count;
}
int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {3,4,5};

   cout << intersection(arr1, arr2, 3,3) << endl; 
    return 0;
}