#include <iostream>
using namespace std;
int nhap(int a);
int tong(int a);
int main(){
    int a;
	a = nhap(a);
    cout << " Tổng các số chia hết cho 3: " << tong(a);
    return 0;
}
int nhap(int a){
	cin >> a;
	return a;
}
int tong(int a){
    int s = 0;
    for(int i=1; i<=a; i++){
		if (i % 3 == 0){
			s += i;
        }
    }
    return s;
}