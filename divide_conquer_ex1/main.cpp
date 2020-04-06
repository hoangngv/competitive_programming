/* Given an array which is already sorted in ascending order.
Write a function to return index i so that arr[i] = i,
if there does not exist satisfactory index i, return -1.

Examples:
 Input: arr[] = {-10, -5, 0, 3, 7} Output: 3 // arr[3] == 3
 Input: arr[] = {0, 2, 5, 8, 17} Output: 0 // arr[0] == 0
 Input: arr[] = {-10, -5, 3, 4, 7, 9} Output: -1 // No Fixed Point

*/

#include <iostream>

using namespace std;

// Solution 1: Linear Search
int linearSearch(int arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i] == i) return i;
    }
    return -1;
}

// Solution 2: Binary Search
int binarySearch(int arr[], int leftMid, int rightMid){
    if (rightMid >= leftMid){
        int mid = (leftMid + rightMid)/2;
        if (mid == arr[mid]) return mid; // consider the middle index
        if (mid > arr[mid]) {
            return binarySearch(arr, mid+1, rightMid); // consider the sub-array on the right side
        } else {
            return binarySearch(arr, leftMid, mid-1); // consider the sub-array on the left side
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << linearSearch(arr, n) << endl;
    cout << binarySearch(arr, 0, n-1);
    return 0;
}
