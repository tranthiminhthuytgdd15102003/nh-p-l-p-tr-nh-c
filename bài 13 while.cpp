#include <iostream>
using namespace std;
int main(){
    int a,tich = 1,i = 1;
    cout << "a = ";
    cin >> a;
    while(i<=a){
        if(i % 5 == 0){
            tich *= i;
        }
        i++;
    }
    cout << "tich = " << tich << endl;
    return 0;
}