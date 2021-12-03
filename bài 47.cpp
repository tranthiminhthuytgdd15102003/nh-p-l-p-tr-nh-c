#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Bang cuu chuong tu 1 den " << n << ":" << endl;
    for(int i = 1; i <= n; i++) {
        cout << "Bang nhan " <<  i << endl;
        for(int j = 0; j <= 10; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
    }
    return 0;
}