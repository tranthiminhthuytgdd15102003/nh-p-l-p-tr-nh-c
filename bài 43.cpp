#include <iostream>
using namespace std;
int nhap_n(){
    int n;
    cout << "n: ";
    cin >> n;
    return n;
}
long int Fibonacci(int n) {
    int f0 = 0, f1 = 1, fn = 1;
    int i;
    if (n < 0) {
        return -1;
    } 
    else if (n == 0 || n == 1) {
        return n;
    } 
    else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
void hien_thi(int n){
    for (int i = 0; i < n; i++) {
        cout << Fibonacci(i) << " ";
    }
}
int main() {
    int n;
    n = nhap_n();
    cout << n << " so dau tien cua day so Fibonacci: ";
    hien_thi(n);
    return 0;
}