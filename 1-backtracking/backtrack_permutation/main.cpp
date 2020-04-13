#include <iostream>

using namespace std;

int n;
bool used[123]; // true if the element is used previously
int a[123];

// print array
void show(){
    for (int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// staying at position pos, let a[pos] an unused element
// then call backtrack(pos+1)
void backtrack(int pos){
    int i;
    if (pos==n+1) {
        show();
        return;
    }
    for (i=1; i<=n; i++){
        //cout << i << endl;
        if (!used[i]){
            a[pos]=i;
            //cout << used[i] << " " << a[pos] << endl;
            used[i]=true;
            backtrack(pos+1);
            used[i]=false;
        }
    }
}

int main()
{
    cin >> n;
    backtrack(1);
    return 0;
}
