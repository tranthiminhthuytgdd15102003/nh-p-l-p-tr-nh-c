#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
void tinh(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0 && n % i == 0){
            tong += i;
        }
    }
    cout << "Tong cac uoc so chan cua n: " << tong << endl;
    return;
}
int main(){
    int n;
    cout << "Nhap n: ";
    n = nhap();
    tinh(n);
    return 0;
}