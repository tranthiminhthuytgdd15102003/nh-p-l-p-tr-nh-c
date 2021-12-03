#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, s = 1;
    cout << "n = ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        s *= pow(i,i);  
    }
    cout << "Tich la: " << s << endl;
    return 0;
}