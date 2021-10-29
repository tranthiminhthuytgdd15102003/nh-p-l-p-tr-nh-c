#include <iostream>
using namespace std;

int main(){
    int b,giai_thua = 1,i = 1;
    cout << "b = ";
    cin >> b;
    if(b < 0){
        cout << "b khong co giai thua" << endl;
    }
    else if(b == 0){
        giai_thua = 1;
        cout << "b! = " << giai_thua << endl;
    }
    else {
        for(i = 1; i <= b; i++){
            giai_thua *= i;
        }
        cout << "b! = " << giai_thua << endl;
    }
    return 0;
}