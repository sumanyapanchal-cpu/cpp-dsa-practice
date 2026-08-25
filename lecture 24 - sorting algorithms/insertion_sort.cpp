#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && curr < arr[prev]) //if curr < arr[prev] isme > sign lga do toh wo descending order me arrange hokr ayga this is valid for all 3 sorting ki comparision i site pr agar less and greter than k signs switch krdo toh wo flipp yani ki descending order me ayge
        {
            arr[prev + 1] = arr[prev]; // this is shifting the smaller element to the right ki prev + 1 is right wla element usko left p rkhdo that is arr[prev]
            prev--;
        }
        arr[prev + 1] = curr; // this is placing the current element in the right position
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}