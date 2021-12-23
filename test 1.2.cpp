#include <iostream>
#include <cstring>
using namespace std;
int main(){
    struct Lop{
        char MaLop[7];
        int Khoa;
        int SiSo;
    };
    int m;
    do{
        cout << "m = ";
        cin >> m;
    } while (m <= 2 || m > 20);
    Lop L[m];
    cout << "Nhap thong tin cua " << m << " lop:" << endl;
    for (int i = 0; i < m; i++){
        cout << "Lop " << i + 1 << ": " << endl;
        cout << "Ma lop:";
        fflush(stdin);
        cin.getline(L[i].MaLop,7);
        cout << "Khoa:";
        cin >> L[i].Khoa;
        cout << "Si so:";
        cin >> L[i].SiSo;
    }
    int S;
    cout << "S = ";
    cin >> S;
    for (int i = 0; i < m; i++){
        if(L[i].SiSo > S){
            cout << "Ma lop:" << L[i].MaLop << endl;
            cout << "Khoa:" << L[i].Khoa << endl;
            cout << "Si so:" << L[i].SiSo << endl;
        }
    }
    return 0;
}