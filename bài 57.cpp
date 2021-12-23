#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
int tinh_gt(int n){
    if(n < 1){
        return 1;
    }
    return n * tinh_gt(n - 1);
}
int main(){
    int n;
    cout << "Nhap n: ";
    n = nhap();
    cout << "n! = " << tinh_gt(n) << endl;
    return 0;
}