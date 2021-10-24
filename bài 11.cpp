#include <iostream>
using namespace std;
int main() {
        int a, b, c;
        cout << "a: ";
        cin >> a;
	    cout << "b: ";
        cin >> b;
	    cout << "c: ";
        cin >> c;
        if((a+b>c) && (a+c>b) && (c+b>a)) {
            cout <<"Day la ba canh cua mot tam giac";
		}  
		else{
			cout << "Day khong phai la ba canh cua mot tam giac";
		}              
}