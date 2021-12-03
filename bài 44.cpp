#include <iostream>
using namespace std;
int main(){
    int n, s = 0;
    cout << "n = ";
    cin >> n;
    if(n <= 0){
        cout << "Nhap lai " << endl;
    }
    else{
        while(n > 0){
           s += n % 10;
           n /= 10;
        }
    cout << "Tong cac chu so la: " << s;
    }
    return 0;
}