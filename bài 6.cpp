#include <iostream>

using namespace std;

int main(){
    int a,luong;
    cout << "a = ";
    cin >> a;
    if(a >= 0){
        if(a % 2 == 0){
            cout << a << " là số chẵn" << endl;
        }
        else {
            cout << a << " là số lẻ" << endl;
        }
    }
    else {
        cout << a << " là số âm" << endl;
    }
    
}