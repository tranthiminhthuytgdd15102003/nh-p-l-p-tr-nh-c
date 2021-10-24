#include <iostream>

using namespace std;

int main(){
    int thang,nam;
    cout << "thang =";
    cin >> thang;
    cout << "nam =";
    cin >> nam;
    switch (thang){
        case 1:
            cout << "Thang 1 co 31 ngay" << endl;
            break;
        case 2:
            if((nam%4==0 && nam%100==0) || (nam%4==0 && nam%100!=0)){
                cout << "Thang 2 co 29 ngay" << endl;
            }
            else {
                cout << "Thang 2 co 28 ngay" << endl;
            }
            break;
        case 3:
            cout << "Thang 3 co 31 ngay" << endl;
            break;
        case 4:
            cout << "Thang 4 co 30 ngay" << endl;
            break;
        case 5:
            cout << "Thang 5 co 31 ngay" << endl;
            break;
        case 6:
            cout << "Thang 6 co 30 ngay" << endl;
            break;
        case 7:
            cout << "Thang 7 co 31 ngay" << endl;
            break;
        case 8:
            cout << "Thang 8 co 31 ngay" << endl;
            break;
        case 9:
            cout << "Thang 9 co 31 ngay" << endl;
            break;
        case 10:
            cout << "Thang 10 co 31 ngay" << endl;
            break;
        case 11:
            cout << "Thang 11 co 31 ngay" << endl;
            break;
        case 12:
            cout << "Thang 12 co 31 ngay" << endl;
            break;
        default:
            cout << "Nhap lai" << endl;

    }
}