#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
void tinh(int n){
    float F;
    for (int i = 1; i <= n; i++){
        F = F + ((float)1 / (i * (i + 1)));
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