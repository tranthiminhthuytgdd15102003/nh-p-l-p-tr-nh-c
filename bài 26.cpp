#include <iostream>
using namespace std;
int main(){
    float diem[10];
	cout << "nhap gia tri cac phan tu cua mang: " << endl;
	for(int i = 0; i < 10; i++){
		cout << "diem [" << i << "] = ";
		cin >> diem[i];
	}
    cout << "Gia tri cua mang sau khi nhap: " << endl;
    for(int i = 0; i < 10; i++){
		cout << "diem [" << i << "] = " << diem[i] << endl;
	}
    return 0;
}