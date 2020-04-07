/* Count the times of a number's appearance in a sorted array */

#include <iostream>

using namespace std;

// Solution 1: Linear Search
int countAppearanceTimes(int arr[], int n, int x){
    int appearances = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == x) appearances++;
    }
    return appearances;
}

// Solution 2: Binary Search
int first(int arr[], int leftMid, int rightMid, int x, int n)
{
    if(rightMid >= leftMid)
    {
        int mid = (leftMid + rightMid)/2; /*leftMid + (rightMid - leftMid)/2;*/
        if (( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, mid+1, rightMid, x, n);
        else
            return first(arr, leftMid, mid-1, x, n);
    }
    return -1;
}

int last(int arr[], int leftMid, int rightMid, int x, int n)
{
    if(rightMid >= leftMid)
    {
        int mid = (leftMid + rightMid)/2; /*leftMid + (rightMid - leftMid)/2;*/
        if ((mid == n-1 || x < arr[mid+1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, leftMid, mid-1, x, n);
        else
            return last(arr, mid+1, rightMid, x, n);
    }
    return -1;
}

int countUsingBinarySearch(int arr[], int n, int x){
    int theFirstSeenIndex, theLastSeenIndex;
    theFirstSeenIndex = first(arr, 0, n-1, x, n); // the first index found
    if (theFirstSeenIndex == -1) return theFirstSeenIndex;
    theLastSeenIndex = last(arr, theFirstSeenIndex, n-1, x, n); // find the last index from the first index to n
    return (theLastSeenIndex-theFirstSeenIndex+1);
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin >> x;
    cout << countAppearanceTimes(arr, n, x) << endl;
    cout << countUsingBinarySearch(arr, n, x) << endl;
    return 0;
}
