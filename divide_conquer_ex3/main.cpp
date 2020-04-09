/* Find the maximum and minimum element in a given array using the fewest comparisons */

#include <iostream>

using namespace std;

struct Pair {
    int min;
    int max;
};

// Solution 1: Simple Linear Search
Pair getMinMax(int arr[], int n){
    Pair minMax;

    // if there is only 1 element
    if (n == 1){
        minMax.min = arr[0];
        minMax.max = arr[0];
        return minMax;
    }

    // else assign min, max for 2 first elements in array and traverse from the 3rd element
    if (arr[0] < arr[1]){
        minMax.min = arr[0];
        minMax.max = arr[1];
    } else {
        minMax.min = arr[1];
        minMax.max = arr[0];
    }

    for (int i=2; i<n; i++){
        if (arr[i] < minMax.min)
            minMax.min = arr[i];
        else if (arr[i] > minMax.max){
            minMax.max = arr[i];
        }
    }
    return minMax;
};

/* Solution 2: Tournament method
Idea: divide array into 2 sub-arrays, find minMax (local results) in each sub-array
and combine to get global results */
Pair findMinMax(int arr[], int low, int high){
    Pair minMax, minMaxLeft, minMaxRight;

    /* there is only one element */
    if (low == high){
        minMax.min = arr[low];
        minMax.max = arr[low];
        return minMax;
    }

    /* there are 2 elements */
    if (low+1 == high){
        if (arr[low] < arr[high]) {
            minMax.min = arr[low];
            minMax.max = arr[high];
        } else {
            minMax.min = arr[high];
            minMax.max = arr[low];
        }
        return minMax;
    }

    /* there are more than 2 elements */
    int mid = (low + high)/2;
    minMaxLeft = findMinMax(arr, low, mid);
    minMaxRight = findMinMax(arr, mid+1, high);

    /* compare */
    if (minMaxLeft.min < minMaxRight.min)
        minMax.min = minMaxLeft.min;
    else
        minMax.min = minMaxRight.min;

    if (minMaxLeft.max > minMaxRight.max)
        minMax.max = minMaxLeft.max;
    else
        minMax.max = minMaxRight.max;

    return minMax;
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr)/sizeof(arr[0]);

    Pair minMax = getMinMax(arr, n);
    Pair minMax2 = findMinMax(arr, 0, n-1);

    cout << "Solution 1:" << endl;
    cout << "The minimum element is  " << minMax.min << endl;
    cout << "The maximum element is  " << minMax.max << endl;

    cout << "Solution 2:" << endl;
    cout << "The minimum element is  " << minMax2.min << endl;
    cout << "The maximum element is  " << minMax2.max << endl;

    return 0;
}
