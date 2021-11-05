#include <iostream>
using namespace std;
int main(){
    int i, n;
    cout << "Nhap n: ";
    cin >> n;
    if(n < 2)
        cout << n <<" khong phai la so nguyen to" << endl;
    else if(n == 2)
        cout << n << " la so nguyen to" << endl;
    else if(n % 2 == 0)
        cout << n <<" khong phai la so nguyen to" << endl;
    else
    {
        for(i = 3; i <= n; i+=2)
        {
            if(n % i == 0)
                break;
        }
        if(i == n)
            cout << n << " la so nguyen to" << endl;
        else
            cout << n <<" khong phai la so nguyen to"<< endl;
    }
    return 0;
}