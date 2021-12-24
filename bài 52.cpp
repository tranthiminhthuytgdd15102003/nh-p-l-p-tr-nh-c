#include <iostream>
using namespace std;
int main() {
    int n, a = 0;
    cout << "n = ";
    cin >> n;
    float s = 0;
    for(int i = 1; i <= n; i++){
        a += i;
        s += (float)1 / a;
    }
    cout << "Tong = " << s << endl;
    return 0;
}