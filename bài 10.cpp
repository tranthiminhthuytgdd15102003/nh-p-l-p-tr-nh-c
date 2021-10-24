#include <iostream>

using namespace std;

int main(){
	int b , giaithua = 1;
	cout << "b = ";
	cin >> b;
	for (int i = 1; i <= b; i++) {
		giaithua = giaithua*i;
	}
	cout << "b! = " << giaithua << endl;
    return 0;
}