#include <iostream>

using namespace std;

int main()
{
    string message = "Hello world!";
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << i << " " << message << endl;
    }
    return 0;
}
