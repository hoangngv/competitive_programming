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
bool picked[1011]; // true if the element is picked into subset, false otherwise
int n; // number of elements in array, n <= 10;
int k; // k lines of output, k subsets, 1 < k < n;
vector<vector<int>> binaryProfiles;

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
        cout << arr[i];
    }
    cout << endl;
}

void pushToVector(vector<int> vec){
    for (int i=1; i<=n; i++){
        vec.push_back(arr[i]);
    }
    for (int i=1; i<=n; i++){
        cout << vec[i];
    }
    cout << endl;
    binaryProfiles.push_back(vec);
}

// generate all possible binary profiles
void generateBinaryProfiles(int pos){
    for (int i=0; i<=1; i++){
        arr[pos] = i;
        if (pos == n){
            vector<int> temporaryVector;
            pushToVector(temporaryVector);
        } else {
            generateBinaryProfiles(pos+1);
        }
    }
}

int main()
{
    //cout << "Hello world!" << endl;
    inputVariables();
    inputArray();
    //printArray();
    generateBinaryProfiles(1);
    return 0;
}
