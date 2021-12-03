#include <iostream>
#include <cmath>
using namespace std;
int nhap(){
    int n;
    cout << "n = " << endl;
    cin >> n;
    return n;
}
long int tinh_tich(int n, long int tich){
    if(n < 1){
        return -1;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return pow(n,n) * tinh_tich(n-1);
    }
}
int main(){
    int n,;
    n = nhap();
    long int tich;
    tich = tinh_tich(n);
    cout << "Tich la " << tich << endl;
    return 0;
}