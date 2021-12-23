#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
void dem_so_chan(int n){
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0 && n % i == 0){
            dem++;
        }
    }
    cout << "So cac uoc so chan cua n: " << dem << endl;
    return;
}
int main(){
    int n;
    cout << "Nhap n: ";
    n = nhap();
    dem_so_chan(n);
    return 0;
}