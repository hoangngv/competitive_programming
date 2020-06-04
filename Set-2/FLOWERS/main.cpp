#include <iostream>

using namespace std;

int N, q;
int treeHeight[10000], highest = 0, neededWaterDrops = 0;

void input(){
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> treeHeight[i];
        if(treeHeight[i] > highest)
        {
            highest = treeHeight[i];
        }
    }
    cin >> q;
}

void calculateWaterDrops(){
    for(int i = 0; i < N; i++)
    {
        if(treeHeight[i] < highest)
        {
            neededWaterDrops += (highest - treeHeight[i])*q;
        }
    }
    cout << neededWaterDrops << endl;
}

int main()
{
    input();
    //cout << "The highest: " << highest << endl;
    calculateWaterDrops();
    return 0;
}
