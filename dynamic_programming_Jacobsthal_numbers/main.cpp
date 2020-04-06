// https://www.geeksforgeeks.org/jacobsthal-and-jacobsthal-lucas-numbers/
/*
Note:
- Jacobsthal sequence starts from 0,1,1,3,5,... (n = 0 => J(0) = 0)
- Jacobsthal-Lucas numbers starts from 2,1,...  (n = 0 => L(0) = 2)

Given a positive integer n. The task is to find nth Jacobsthal and Jacobsthal-Lucas numbers.
*/

#include <iostream>

using namespace std;

// dynamic programming, not recursive
int JacobsthalValue(int position){
    int J[position+1];
    // base case
    J[0] = 0;
    J[1] = 1;
    for (int i = 2; i <= position; i++){
        J[i] = J[i-1] + 2*J[i-2];
    }
    return J[position];
}

int LucasValue(int position){
    int L[position+1];
    // base case
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= position; i++){
        L[i] = L[i-1] + 2*L[i-2];
    }
    return L[position];
}

int main()
{
    int n;
    cin >> n;
    cout << "The " << n << "-th element in Jacobsthal sequence is: " << JacobsthalValue(n) << endl;
    cout << "The " << n << "-th element in Jacobsthal-Lucas sequence is: " << LucasValue(n) << endl;
    return 0;
}
