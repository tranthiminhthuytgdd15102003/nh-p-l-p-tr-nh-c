#include <iostream>
using namespace std;
void nhap(int a, int b, int c){
    if(a > 0 && b > 0 && c > 0){
        if(a + b > c && a + c > b && b + c > a){
            cout << "a,b,c tao thanh tam giac" << endl;
        }
        else {
            cout << "a,b,c khong tao thanh tam giac" << endl;
        }
    }
    else {
        cout << "a,b,c khong tao thanh tam giac" << endl;
    }
}
int main(){
    int a, b, c;
	cout << "Nhap a, b, a: ";
    cin >> a >> b >> c;
    nhap(a, b, c);
    return 0;
}
