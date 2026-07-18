/*#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // to print the index at which smallest and largest number lies

    int arr[5] = {5, 4, 3, 2, 1};
    int smallest = INT_MAX; //ye wale variables kahi use hi nhai kre so problem
    int largest = INT_MIN;
    int smallest_index=0; //ye new variable banaya ab 
    int largest_index=0;
 
    for (int i = 0; i < 5; i++)
    {
        smallest = min(arr[i], smallest);
        if (arr[i] == smallest) //issue - jb bh chota milta h kuch + infinity se wo print krre hai ye glt hai
        {
            cout << i; //iske badle fix- smallest = arr[i] and smallest_index= i aise likhdo jese niche jra hai 
        } 
        
    }

    for (int j = 0; j < 5; j++)
    {
        largest = max(arr[j], largest);
        if (arr[j] == largest)
        {
            cout << j;
        } 
        
    }
    cout << smallest << " " << largest << endl;

    return 0;
} */

//correct logic-
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest) //ye isliye likha h ki arr[i] ki value infinity se choti ho to run krna, whiich is by default true
        {
            smallest = arr[i];
            smallestIndex = i;
        }

        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }

    cout << "Smallest element = " << smallest << " at index " << smallestIndex << endl;
         

    cout << "Largest element = " << largest << " at index " << largestIndex << endl;
         

    return 0;
}