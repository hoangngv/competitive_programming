#include <iostream>

using namespace std;

int leftDuplicates(int arr[], int n, int index){
    int target = arr[index];
    int num = 0;
    for (int i = 1; i < index; i++){
        if (arr[i] == target) num++;
    }
    return num;
}

int rightDuplicates(int arr[], int n, int index){
    int target = arr[index];
    int num = 0;
    for (int i = index+1; i <= n; i++){
        if (arr[i] == target) num++;
    }
    return num;
}

int main()
{
    // input
    int N, K;
    cin >> N >> K;
    int arr[N], query[K];
    for (int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= K; i++){
        cin >> query[i];
    }

    // print result
    for (int i = 1; i <= K; i++) {
        cout << leftDuplicates(arr, N, query[i]) << " " << rightDuplicates(arr, N, query[i]) << endl;
    }
    return 0;
}
