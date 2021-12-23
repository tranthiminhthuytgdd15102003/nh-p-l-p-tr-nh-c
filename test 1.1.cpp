#include <iostream>
#include <cmath>
using namespace std;
float nhap_m(){
    float m;
    cout << "m = ";
    cin >> m;
    return m;
}
void tinh(float m){
    float F;
    if(m < 1){
        F = pow(m, 2) - 1.8 * sin(m) + 1.7;
    }
    else {
        F = cos(m - 1) + 1.78 * pow(m, 3) - 1.86;
    }
    cout << "F = " << F << endl;
}
int main(){
    float m = nhap_m();
    tinh(m);
    return 0;
}