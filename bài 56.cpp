#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
int tinh_tong(int n){
    if(n < 1){
        return 0;
    }
    return n + tinh_tong(n - 1);
}
int main(){
    int n;
    cout << "Nhap n: ";
    n = nhap();
    cout << "Tong: " << tinh_tong(n) << endl;
    return 0;
}