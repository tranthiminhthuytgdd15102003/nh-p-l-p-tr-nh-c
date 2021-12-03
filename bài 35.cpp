#include <iostream>
using namespace std;
int tinhGiaiThua(int n) {
    int giaithua = 1;
    if (n==0 || n==1) {
        return giaithua;
    }
    else {
        for (int i=2; i<=n; i++) {
            giaithua = giaithua*i;
        }
        return giaithua;
    }
}
int main() {
    int n; 
    cout << "Nhap n : ";
    cin >> n; 
    cout << n << "! = " << tinhGiaiThua(n);   
}