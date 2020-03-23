#include <iostream>

using namespace std;

int bits;
int arr[100];

// print array
void show(){
    for (int i=1; i<=bits; i++){
        cout << arr[i];
    }
    cout << endl;
}

//
void generate_binary(int pos){
    for (int i=0; i<=1; i++){
        arr[pos] = i;
        if (pos == bits){
            show();
        } else {
            generate_binary(pos+1);
        }
    }
}

int main()
{
    cin >> bits;
    generate_binary(1);
    return 0;
}
