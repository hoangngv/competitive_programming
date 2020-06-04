#include <iostream>
#include <vector>

using namespace std;

int a, b, MIN_num = -1, MAX_num = -1;
float MIN = 100000000, MAX = 0;

void input(){
    cin >> a >> b;
}

// tinh tong cac uoc chung
int getSumOfDivisors(int number)
{
    int sum = 0;
    for(int i = 1; i <= number/2; i++)
    {
        if(number%i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    input();
    vector<int> trivialList;
    for(int i = a; i <= b; i++)
    {
        int sumOfDivisors = getSumOfDivisors(i);
        float trivial = (float)sumOfDivisors/(float)i;
        trivialList.push_back(trivial);
        if(trivial < MIN)
        {
            MIN = trivial;
            MIN_num = i;
        }
        if(trivial > MAX)
        {
            MAX = trivial;
            MAX_num = i;
        }
    }
    cout << MIN_num << " " << MAX_num << endl;
//    int minPos = 0, maxPos = 0;
//    for (unsigned i = 0; i < trivialList.size(); ++i) {
//        if (trivialList[i] < trivialList[minPos])
//            minPos = i;
//        if (trivialList[i] > trivialList[maxPos])
//            maxPos = i;
//    }
//    cout << a+minPos << " " << a+maxPos << endl;
    return 0;
}
