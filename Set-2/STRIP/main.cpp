#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> colors;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (find(colors.begin(), colors.end(), arr[i]) == colors.end()) {
            colors.push_back(arr[i]);
        }
    }

    cout << colors.size() << endl;
    return 0;
}
