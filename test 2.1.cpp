#include <iostream>
using namespace std;
int nhap_n(){
    int n;
    cout << "n = ";
    cin >> n;
    return n;
}
void tinh(int n){
    int tong = 0;
    for (int i = 1; i <= n; i++){
        tong += (i * 10 + 3);
    }
    cout << "Ket qua:" << tong << endl;
}
/*int tinh(int n){
	if(n <= 0){
		return 0;
	}
    return (n * 10 + 3) + tinh(n - 1);*/
int main(){
    int n = nhap_n();
    tinh(n);
    return 0;
}