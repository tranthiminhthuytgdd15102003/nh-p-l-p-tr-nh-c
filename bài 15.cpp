#include <iostream>

using namespace std;

int main(){
	int n , giai_thua = 1;
	cout << "n = ";
	cin >> n;
	if (n>=5) {
	    for (int i = 1; i <= (n-5); i++) {
		     giai_thua *= i; 
		}
		cout << "(n-5)! = " << giai_thua << endl;
	}else {
		cout << "Nhap lai";
	}
    return 0;
}