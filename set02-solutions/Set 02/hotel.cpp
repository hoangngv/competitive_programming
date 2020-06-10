#include <bits/stdc++.h>

using namespace std;

int n, matrix[50][50]={-1};

int main()
{
    cin >> n;
    matrix[0][0]=n;
    int row=0, col=1;
    while(true)
    {
        int remain;
        if(col>0 && matrix[row][col-1]!=0)
        {
            remain=matrix[row][col-1]-3;
            if(remain<0)
            {
                row++;
                col=0;
            }
        }
        else if(row>0 && matrix[row-1][col]!=0)
        {
            remain=matrix[row-1][col]-2;
            if(remain<0)
            {
                row++;
                col=0;
            }
        }
        if(remain>0)
        {
            matrix[row][col]=remain;
            col++;
        }
        if(remain==0)
        {
            cout << row << " " << col << endl;
            break;
        }
    }
    return 0;
}
