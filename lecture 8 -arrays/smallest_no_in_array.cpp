#include <iostream>
#include<climits>

using namespace std;

int main()
{

    /*
    old logic-

    int arr[5] = {98, -98, 2, 3, 4};
    int min = arr[0];


    for (int i = 0; i < 5; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min << endl; */

    // new logic-
    int nums[] = {5, 15, 24, 98, 65, -6};
    int size = 6;

    int smallest = INT_MAX; //ye concept INT_MAX--> + infinity wala only works with #include<climits> taki har value isse choti hii ho

    int largest = INT_MIN; // - infinity taki har value isse badi hi ho 

    for (int i = 0; i < size; i++)
    {
        /*
        old logic-
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        } */

        smallest = min(nums[i], smallest); //inbild function that compares both 
        largest = max(nums[i], largest);

    }
cout << "smallest :"<< smallest << endl;
cout << "largest :"<< largest << endl;
    return 0;
}