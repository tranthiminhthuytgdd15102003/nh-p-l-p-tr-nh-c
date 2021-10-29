#include <iostream>

using namespace std;

int main(){
	int n , giaithua = 1, i = 1;
	cout << "n = ";
	cin >> n;
	if (n%3 != 0) {
		cout << "nhap lai" << endl;
    }
    else {
	    do {
			giaithua *= i;
            i++;
			}while(i<=(n-3));
		cout << "(n-3)!/2 = " << giaithua/2 << endl;
    }
	return 0; 
}