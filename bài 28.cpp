#include <iostream>
using namespace std;
int main(){
    int mang[5];
	cout << "nhap gia tri cua mang: " << endl;
	for(int i = 0; i < 5; i++){
		cout << "mang [" << i << "] = ";
		cin >> mang[i];
	}
    for(int i = 0; i < 5; i++){
		if( mang[i] % 2 == 0){
			cout << mang[i] << endl;
		}
	}
    return 0;
}