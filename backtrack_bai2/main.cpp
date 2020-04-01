// find all subsets that has sum equals to given number
// idea:
// array co 6 phan tu => generate tat ca cac cau hinh binary co the
// vi du: 100101
// 1 picked, 0 otherwise
// cau hinh nao cong lai co tong bang S thi coi do la 1 solution

#include <iostream>
#include <vector>

using namespace std;

int arr[1011];
int n; // number of elements in array, n <= 10;
int k; // sum
int profile[1011];
vector< vector<int> > mySolutions;

void inputVariables(){
    cin >> n >> k;
}
void inputArray(){
    for (int i=1; i<=n; i++){
        cin >> arr[i];
    }
}

void printArray(){
    for (int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void checkSolution(int profile[]){
    int sum = 0;
    for (int i=1; i<=n; i++){
        if (profile[i] == 1) {
            sum += arr[i];
        }
    }
    if (sum == k){
        vector<int> solution;
        for (int i=1; i<=n; i++){
            if (profile[i] == 1){
                solution.push_back(arr[i]);
            }
        }
        mySolutions.push_back(solution);
    }
}

// generate all possible binary profiles and check if a solution is feasible
void generateBinaryProfiles(int pos){
    // backtrack algorithm
    for (int i=0; i<=1; i++){
        profile[pos] = i;
        if (pos == n){
            checkSolution(profile);
        } else {
            generateBinaryProfiles(pos+1);
        }
    }
}

void printSolutions(){
    int numberOfSolutions = mySolutions.size();
    if (numberOfSolutions > 0) {
        cout << "There are: " << numberOfSolutions << " solution(s)." <<  endl;
        for (int i=0; i<numberOfSolutions; i++){
            for (unsigned int j=0; j<mySolutions[i].size(); j++){
                cout << mySolutions[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "There is no solution." << endl;
    }
}

int main()
{
    inputVariables();
    inputArray();
    generateBinaryProfiles(1);
    printSolutions();
    return 0;
}
