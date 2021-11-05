#include <iostream>
using namespace std;
int main() {
    int i = 2, j, n, kt;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tat ca cac so nguyen to tu 1 den " << n << " la: ";
    while (i <= n) {
        kt = 1;
        if (i != 0 && i != 1) {
            j = 2;
            while(j <= i/2) {
                if(i%j == 0) {
                    kt = 0;
                    break;
                }
                j++;
            }
        } else {
           kt = 0;
        }
        if(kt == 1) {
            cout << i << " ";
        }
       i++;
    }
    return 0;
}