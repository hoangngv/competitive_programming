#include <bits/stdc++.h>

using namespace std;

int table[8][8]={0}, mem[8]={-1}, MAX=0;
bool used[8]={false};

bool check(int row, int col)
{
    if(used[row]==true)
    {
        return false;
    }
    for(int i=0; i<col; i++)
    {
        if(abs(col-i)==abs(row-mem[i]) || (col+row)==(mem[i]+i))
        {
            return false;
        }
    }
    return true;
}
void queen(int pos, int score)
{
    if(pos>=8)
    {
        if(score>MAX)
        {
            MAX=score;
            cout << MAX << endl;
            for(int i=0; i<8; i++)
            {
                cout << mem[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    else
    {
        for(int i=0; i<8; i++)
        {
            if(used[i]==false && check(i, pos))
            {
                used[i]=true;
                score+=table[i][pos];
                mem[pos]=i;
                queen(pos+1, score);
                used[i]=false;
                score-=table[i][pos];
                mem[pos]=-1;
            }
        }
    }
}

int main()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> table[i][j];
        }
    }
    queen(0, 0);
    return 0;
}
