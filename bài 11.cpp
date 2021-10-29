#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
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
    return 0;
}