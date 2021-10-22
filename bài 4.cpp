#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "a = ";
    cin >> a;
    if(a%5 == 0){
        a += 10;
    }
    else {
        a -= 10;
    }
    cout << "a = " << a << endl;
}