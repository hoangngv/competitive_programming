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

int main()
{
    //cout << "Hello world!" << endl;
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr)/sizeof(arr[0]);
    Pair minMax = getMinMax(arr, n);
    cout << "The minimum element is  " << minMax.min << endl;
    cout << "The maximum element is  " << minMax.max << endl;
    return 0;
}
