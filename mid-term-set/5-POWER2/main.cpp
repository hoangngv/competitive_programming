#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

unsigned long long int powArray[35] = {0}, arr[100];
int n;

void precompute() {
    for(int i = 0; i < 35; i++)
    {
        powArray[i] = pow(2, i);
    }
}

void input() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
}

int main()
{
    precompute();
    input();

    int i = 0, j = 0;
    bool exist = false;

    for(; i < n;)
    {
        if(arr[i] == powArray[j])
        {
            exist = true;
            cout << arr[i] << " ";
            i++;
        }
        else if(arr[i] > powArray[j])
        {
            j++;
        }
        else if(arr[i] < powArray[j])
        {
            i++;
        }
    }

    if(!exist)
    {
        cout << "No" << endl;
    }
    return 0;
}
