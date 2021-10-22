#include <iostream>

using namespace std;

int main(){
    int a,luong;
    cout << "a = ";
    cin >> a;
    if(a < 0){
        luong = 0;
    }
    else if(a < 50){
        luong = a * 100000;
    }
    else if(a < 70){
        luong = a * 110000;
    }
    else if(a < 100){
        luong = a * 120000;
    }
    else if(a < 150){
        luong = a * 140000;
    }
    else {
        luong = a * 150000;
    }
    cout << "luong = " << luong << endl;
}