// print all subsets of n-element set {1,2,...,n}

#include <iostream>

using namespace std;

int n;
bool arr[1011]; // true if i is picked into subset, false otherwise

void show(){
    for (int i=1; i<=n; i++){
        if (arr[i]) {
            cout << i; // print i that arr[i]=1
        }
    }
    cout << endl;
}

void findSubsets(int start){
    if (start == n+1){
        show();
        return;
    }
    arr[start]=0;
    findSubsets(start+1);
    arr[start]=1;
    findSubsets(start+1);
}


int main()
{
    cin >> n;
    findSubsets(1);
    return 0;
}
