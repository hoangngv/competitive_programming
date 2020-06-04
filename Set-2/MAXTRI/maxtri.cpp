#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void input(int arr[]){
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
}

string toString(int number){
    string num;
    stringstream ss;
    ss << number;
    ss >> num;
    return num;
}

int toInt(string number)
{
    int num;
    stringstream ss;
    ss << number;
    ss >> num;
    return num;
}

void sort(int arr[]){
    if (arr[1] < arr[0])
        swap(arr[0], arr[1]);
    if (arr[2] < arr[1]){
        swap(arr[1], arr[2]);
        if (arr[1] < arr[0])
            swap(arr[1], arr[0]);
    }
}

string getNumberInString(int a[], int n)
{
    string number;
    for (int i = 0; i < n; i++) {
        number += toString(a[i]);
    }
    return number;
}

int getMaxNumber(int a[], int n)
{
    int maxNumber = 0;
    sort(a);
    do {
        string num = getNumberInString(a, n);
        //cout << num << endl;
        if (maxNumber < toInt(num)) {
            maxNumber = toInt(num);
        }
    } while (next_permutation(a, a + n));
    return maxNumber;
}

int main()
{
    int arr[3];
    input(arr);
    cout << getMaxNumber(arr, 3);
    return 0;
}
