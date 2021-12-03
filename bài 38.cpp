#include <iostream>
#include <cmath>
using namespace std;
int nhap(int n){
    cin >> n;
    return n;
}
void tinh_giai_thua(int a){
    int giaithua = 1;
    if (a==0 || a==1) {
        return giaithua;
    }
    else {
        for (int i = 2; i <= a; i++) {
            giaithua *= i;
        }
        return giaithua;
    }
    cout << "a! = " << giaithua << endl;
}
void tinh_bt(int a, int b, int c){
    int kq = pow(a,2) - pow(b,3) + pow(c,5);
    cout << "a^2 - b^3 + c^5 = " << kq << endl;
}
void pt(int a, int b, int c){
    float x, delta, x1, x2;
    if(a == 0){
        if(b == 0){
            if(c == 0){
                cout << " phuong trinh vo so nghiem " << endl;
            }
            else{
                cout << " phuong trinh vo nghiem " << endl;
            }
        }
        else{
            x = (float)-c / b;
            cout << "phuong trinh co nghiem x = " << x << endl;
        }
    }
    else{
        delta = pow(b,2) - 4 * a * c;
        if(delta < 0){
            cout << " phuong trinh vo nghiem " << endl;
        }
        else if(delta == 0){
            x = (float)-b / (2 * a);
        }
        else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "phuong trinh co nghiem x1 = " << x1 << endl;
            cout << "phuong trinh co nghiem x2 = " << x2 << endl; 
        }
    }
}
void tam_giac(int a, int b, int c){
    if(a > 0 && b > 0 && c > 0){
        if(a + b > c && a + c > b && b + c > a){
            cout << "a,b,c tao thanh tam giac" << endl;
        }
        else {
            cout << "a,b,c khong tao thanh tam giac" << endl;
        }
    }
    else {
        cout << "a,b,c khong tao thanh tam giac" << endl;
    }
}
void menu(){
    cout << "1. Tinh a!" << endl;
    cout << "2. Tinh a^2 - b^3 + c^5" << endl;
    cout << "3. Giai pt a * x^2 -b * x + c = 0" << endl;
    cout << "4. Kiem tra a, b, c co phai canh tam giac khong" << endl;
    cout << "5. Thoat" << endl;
    cout << "Chon: " << endl;
}
int main(){
    int a, b, c, n;
    a = nhap();
    b = nhap();
    c = nhap();
    menu();
    n = nhap();
    switch (n)
    {
    case 1:
        tinh_giai_thua(a);
        break;
    case 2:
        tinh_bt(a, b, c);
        break;
    case 3:
        pt(a, b, c);
        break;
    case 4:
        tam_giac(a, b, c);
        break;
    case 5:
        break;
    default:
        cout << "Nhap sai" << endl;
        break;
    }
    return 0;
}