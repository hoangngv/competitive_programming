/*Cho số nguyên dương n (n≤20), hãy liệt kê tất cả các xâu n ký tự,
chỉ gồm hai ký tự A và B mà không có hai ký tự B nào đứng cạnh nhau.
Các xâu ký tự được sắp xếp theo thứ tự từ điển, mỗi xâu nằm trên một dòng.

Input : Số n

Output : Các xâu ký tự được sắp xếp theo thứ tự từ điển. Mỗi xâu nằm trên một dòng. */

#include <iostream>
#include <vector>
#define getName(var)  #var

using namespace std;

int n; // n <= 20
int arr[1011];
const int A = 0;
const int B = 1;
vector<string> qualifiedSolutions;

void show(){
    for (int i=1; i<=n; i++){
        cout << arr[i];
    }
    cout << endl;
}

void saveSolution(){
    string stringGenerated = "";
    for (int i=1; i<=n; i++){
        if (arr[i] == B && arr[i+1] == B) return;
        if (arr[i] == A) stringGenerated += getName(A);
        else stringGenerated += getName(B);
    }
    qualifiedSolutions.push_back(stringGenerated);
}

void generateStrings(int pos){
    if (pos == n+1){
        //show();
        saveSolution();
        return;
    }
    for (int i=0; i<=1; i++){
        arr[pos] = i;
        generateStrings(pos+1);
    }
}

void printSolutions(){
    for (auto i: qualifiedSolutions){
        cout << i << endl;
    }
}

int main()
{
    //cout << getName(A) << endl;
    cin >> n;
    generateStrings(1);
    printSolutions();
    return 0;
}
