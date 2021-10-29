#include <iostream>
using namespace std;
int main(){
    int a,tich = 1,i = 1;
    cout << "a = ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        if(i % 5 == 0){
            tich *= i;
        }
    }
    cout << "tich = " << tich << endl;
    cout << i << endl;
    return 0;
}