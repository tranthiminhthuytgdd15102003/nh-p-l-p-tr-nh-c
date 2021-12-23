#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
void tinh(int n){
    float F;
    int mau_so;
    for (int i = 1; i <= n; i++){
        mau_so = 0;
        for (int j = 1; j <= i; j++){
            mau_so += j;
        }
        F = F + (float)1 / mau_so;
    }
    cout << "F = " << F << endl;
    return;
}
int main(){
    int n;
    cout << "Nhap n: ";
    n = nhap();
    tinh(n);
    return 0;
}