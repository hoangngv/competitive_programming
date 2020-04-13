/*
Newman-Conway numbers is the one which generates the following integer sequence.
    1 1 2 2 3 4 4 4 5 6 7 7 ... and follows below recursive formula.
    P(n) = P(P(n - 1)) + P(n - P(n - 1))
Given a number n then print n terms of Newman-Conway Sequence

Examples:
    Input : 13
    Output : 1 1 2 2 3 4 4 4 5 6 7 7 8

    Input : 20
    Output : 1 1 2 2 3 4 4 4 5 6 7 7 8 8 8 8 9 10 11 12

*/

#include <iostream>

using namespace std;

void printNewmanConwaySequence(int n){
    int P[n+1]; // need one more address to store P[0]
    P[0] = 0;
    P[1] = 1;
    P[2] = 1;

    // print 2 first elements
    cout << P[1] << " " << P[2] << " ";

    for (int i=3; i<=n; i++){
        P[i] = P[P[i-1]] + P[i - P[i-1]];
        cout << P[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printNewmanConwaySequence(n);
    //cout << "Hello world!" << endl;
    return 0;
}
