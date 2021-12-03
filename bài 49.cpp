#include <iostream>
using namespace std;
int main(){
    struct hoc_sinh {
        char ho_ten[100];
        int tuoi;
        char dia_chi[100];
    };
    hoc_sinh hs;
    cout << "Nhap ho ten: ";
    cin.getline(hs.ho_ten, 100);
    cout << "Nhap tuoi: ";
    cin >> hs.tuoi;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    cin.getline(hs.dia_chi, 100);
    cout << "Ho ten hs sau khi nhap: " << endl;
    cout << "Ho ten hs: " << hs.ho_ten << endl;
    cout << "Tuoi hs: " << hs.tuoi << endl;
    cout << "Dia chi hs: " << hs.dia_chi << endl;
    hoc_sinh hs1[10];
    
    for(int i = 0; i < 10; i++){
        cout << "Nhap ho ten cua hs" << i << ": ";
        cin >> hs1[i].ho_ten;
        cout << "Nhap tuoi hs" << i << ": ";
        cin >> hs1[i].tuoi;
        cout << "Nhap dia chi hs" << i << ": ";
        fflush(stdin);
        cin.getline(hs1[i].dia_chi, 100);
    }
    cout << "Nhap thong tin hs: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Ho ten hs" << i << " la: " << hs1[i].ho_ten << endl;
        cout << "Tuoi: cua hs " << i << " : " << hs1[i].tuoi << endl;
        cout << "Nhap dia chi: cua hs " << i << " : " << hs1[i].dia_chi << endl;
    }
    return 0;
}