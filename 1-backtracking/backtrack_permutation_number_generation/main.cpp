#include <iostream>

using namespace std;

int n;
int arr[1011]; // array
int checkUsage[1011]; // true if used and false if unused

void show(){
    for (int i=1; i<=n; i++){
        cout << arr[i];
    }
    cout << endl;
}

void generatePermutations(int pos){
    // neu pos vuot qua n thi ko backtrack nua ma in ra va dung lai luot backtrack do
    if (pos == n+1){
        show();
        return; // sau khi in xong thi dung lai viec backtrack o lan duyet do
    }
    // duyet cac gia tri co the cho tung vi tri (vi du: n=3 thi moi vi tri co the nhan 1 trong 3 gia tri la 1,2 hoac 3
    for (int i=1; i<=n; i++){
        // neu gia tri i chua dung thi
        if (checkUsage[i] == false){
            arr[pos] = i; // gan gia tri i do cho vi tri pos trong so can tim
            checkUsage[i] = true; // sau khi gan xong gia tri i thi danh dau la da dung roi
            generatePermutations(pos+1); // backtrack tiep cho pos tiep theo
            checkUsage[i] = false; // sau khi tim duoc 1 so thi ta reset lai cac gia tri ve trang thai chua duoc su dung
        }
    }
}

int main()
{
    cin >> n;
    generatePermutations(1); // bat dau backtrack sinh so tu vi tri dau tien cua so can tim
    return 0;
}
