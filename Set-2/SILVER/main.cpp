#include <iostream>

using namespace std;

int n, score[1000000];
int goldMedal = INT_MIN, silverMedal = INT_MIN;

void input(){
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
        if(score[i] > goldMedal)
        {
            silverMedal = goldMedal;
            goldMedal = score[i];
        }
        if(score[i] > silverMedal && score[i] != goldMedal)
        {
            silverMedal = score[i];
        }
    }
}

void printSilverMedal(){
    cout << silverMedal;
}

int main()
{
    input();
    printSilverMedal();
    return 0;
}
