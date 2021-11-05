#include <iostream>
using namespace std;
int main(){
    float diem[3], tong = 0, tb;
	cout << "nhap diem: " << endl;
	for(int i = 0; i < 3; i++){
		cout << "diem [" << i << "] = ";
		cin >> diem[i];
	}
    for(int i = 0; i < 3; i++){
		tong += diem[i];
    }
	tb = tong / 3;
	cout << "trung binh: " << tb << endl;
    return 0;
}