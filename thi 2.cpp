#include <iostream>
#include <cstring>
using namespace std;
int main(){
    struct sinh_vien {
        char msv[10];
        char ho_ten[100];
        float diem_giua_ky;
        float diem_cuoi_ky;
        float diem_tb;
    };
    sinh_vien sv[5];
    cout << "Nhap thong tin sv: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "MSV cua sv " << i << ": ";
        fflush(stdin);
        cin.getline(sv[i].msv, 100);
        cout << "Ho ten cua sv " << i << ": "; 
        fflush(stdin);
        cin.getline(sv[i].ho_ten, 100);
        cout << "Diem giua ky cua sv " << i << ": ";
        cin >> sv[i].diem_giua_ky;
        cout << "Diem cuoi ky cua sv " << i << ": ";
        cin >> sv[i].diem_cuoi_ky;
        cout << "Diem tb cua sv " << i << ": ";
        sv[i].diem_tb = ((sv[i].diem_giua_ky) + (sv[i].diem_cuoi_ky)) / 2;
        cout << sv[i].diem_tb << endl;
    }
    cout << endl;
    cout << "Thong tin sv co diem tb cao nhat: " << endl;
    float max = sv[0].diem_tb;
    for(int i = 0; i < 5; i++){
        if(max < sv[i].diem_tb){
            max = sv[i].diem_tb;
        }
    }
    for(int i = 0; i < 5; i++){
        if(max == sv[i].diem_tb){
            cout << "MSV cua sv " << i << ": " << sv[i].msv << endl;
            cout << "Ho ten cua sv " << i << ": " << sv[i].ho_ten << endl;
            cout << "Diem giua ky cua sv " << i << ": " << sv[i].diem_giua_ky << endl;
            cout << "Diem cuoi ky cua sv " << i << ": " << sv[i].diem_cuoi_ky << endl;
            cout << "Diem tb cua sv " << i << ": " << sv[i].diem_tb << endl; 
        }
    }    
    cout << endl;
    return 0;
}