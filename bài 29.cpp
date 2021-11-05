#include <iostream>
using namespace std;
int main(){
    double a[10], tong = 0;
	cout << "nhap gia tri cua mang: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
    for(int i = 0; i < 10; i++){
		
		if( int (a[i]) % 2 != 0){
			tong += a[i];
		}
	}
	cout << "Tong cac phan tu khong chia het cho 2: " << tong << endl;
    return 0;
}