/*
Greedy algorithm consists of 4 main components:
    1. Solution set: which is gradually built over each step
    2. Candidate set (potential values): from this set, at each step, we pick out the most optimal value
    and put it into result set
    3. Feasible function checks if result set is feasible - if it can be for later step
    4. Selection function  picks the most optimal value from candidate set
    5. Objective function (sometimes unambiguous) reviews the value of solution
(optimal means maximum or minimum depending on our problem)

Structure of greedy algorithm:
    1. Initially, solution set is empty
    2. At each step:
        - Use selection function to pick 1 value from candidate set and put it into result set
        - If result set is not feasible:
            + Ignore the value being considered
        - Else:
            + Put this value into result set

Greedy algorithm is kind of top-down approach, at each step we pick local optimal value to build
a global solution set.

*/

#include <iostream>

using namespace std;

/* Idea: Divide our array that needs to be sorted into 2 parts: sorted part (solution set, initially empty)
and unsorted part (candidate set, initially the whole array)
Over each step, we get the min element from unsorted part and put it into the right-hand side of sorted part.
The process ends once the unsorted part gets empty.
*/

// Selection Sort
void selectionSort(int arr[], int n){
    int minIndex, tmp;
    for (int i=0; i<n-1; i++){
        minIndex = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        if (minIndex != i){
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
