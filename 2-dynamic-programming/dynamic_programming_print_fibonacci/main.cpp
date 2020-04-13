/* Given a number n then print n terms of fibonacci series in reverse order.
    Examples:
        Input : n = 5
        Output : 3 2 1 1 0

        Input : n = 8
        Output : 13 8 5 3 2 1 1 0
*/


#include <iostream>

using namespace std;

void printFibonacciSeries(int n){
    int arr[n];

    // initialize 1st & 2nd elements in the series (0, 1, 1, 2, 3,...)
    arr[0] = 0;
    arr[1] = 1;

    // traverse next elements from 2 init
    for (int i=2; i<n; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }

    // print array in reverse order
    for (int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printFibonacciSeries(n);
    return 0;
}
