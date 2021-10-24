#include <iostream>

using namespace std;

int main(){
    int a,tong = 0,i = 1;
    cout << "a = ";
    cin >> a;
    for(int i = 1;i <= a;i++){
        tong += i;
    }
    cout << "Tong la "<< tong << endl;
}