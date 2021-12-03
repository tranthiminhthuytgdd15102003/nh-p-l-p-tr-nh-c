#include <iostream>
#include <cstring>
using namespace std;
int main(){
    struct sinh_vien {
        char msv[10];
        char ho_ten[100];
        int tuoi;
        float diem_giua_ky;
        float diem_cuoi_ky;
        float diem_tb;
    };
    sinh_vien sv[10];
    cout << "Nhap thong tin sv: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "MSV cua sv" << i << ": ";
        fflush(stdin);
        cin.getline(sv[i].msv, 100);
        cout << "Ho ten cua sv" << i << ": ";
        cin.getline(sv[i].ho_ten);
        cout << "Tuoi hs" << i << ": ";
        cin >> sv[i].tuoi;
        cout << "Diem giua ky" << i << ": ";
        cin >> sv[i].diem_giua_ky;
        cout << "Diem cuoi ky" << i << ": ";
        cin >> sv[i].diem_cuoi_ky;
        cout << "Diem tb cua sv" << i << ": ";
        sv[i].diem_tb = ((sv[i].diem_giua_ky) + (sv[i].diem_cuoi_ky)) / 2;
        cout << sv[i].diem_tb << endl;
    }
    cout << endl;
    cout << "Thong tin sv co diem tb cao nhat: " << endl;
    float max = sv[0].diem_tb;
    for(int i = 0; i < 10; i++){
        if(max < sv[i].diem_tb){
            max = sv[i].diem_tb;
        }
    }
    for(int i = 0; i < 10; i++){
        if(max == sv[i].diem_tb){
            cout << "MSV cua sv" << i << ": " << sv[i].msv << endl;
            cout << "Ho ten cua sv" << i << ": " << sv[i].ho_ten << endl;
            cout << "Tuoi cua sv" << i << ": " << sv[i].tuoi << endl;
            cout << "Diem giua ky cua sv" << i << ": " << sv[i].diem_giua_ky << endl;
            cout << "Diem cuoi ky cua sv" << i << ": " << sv[i].diem_cuoi_ky << endl;
            cout << "Diem tb cua sv" << i << ": " << sv[i].diem_tb << endl; 
        }
    }    
    cout << "Thong tin sv co diem tb thap nhat: " << endl;
    float min = sv[0].diem_tb;
    for(int i = 0; i < 10; i++){
        if(min > sv[i].diem_tb){
            min = sv[i].diem_tb;
        }
    }
    for(int i = 0; i < 10; i++){
        if(min == sv[i].diem_tb){
            cout << "MSV cua sv" << i << ": " << sv[i].msv << endl;
            cout << "Ho ten cua sv" << i << ": " << sv[i].ho_ten << endl;
            cout << "Tuoi cua sv" << i << ": " << sv[i].tuoi << endl;
            cout << "Diem giua ky cua sv" << i << ": " << sv[i].diem_giua_ky << endl;
            cout << "Diem cuoi ky cua sv" << i << ": " << sv[i].diem_cuoi_ky << endl;
            cout << "Diem tb cua sv" << i << ": " << sv[i].diem_tb << endl; 
        }
    }        
    cout << endl;
    cout << "Thong tin sv theo thu tu diem tb tang dan: " << endl;
    sinh_vien temp;
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(sv[i].diem_tb > sv[j].diem_tb){
                strcpy(temp.msv, sv[i].msv);
                strcpy(temp.ho_ten, sv[i].ho_ten);
                temp.tuoi = sv[i].tuoi;
                temp.diem_giua_ky = sv[i].diem_giua_ky;
                temp.diem_cuoi_ky = sv[i].diem_cuoi_ky;
                temp.diem_tb = sv[i].diem_tb;

                strcpy(sv[i].msv, sv[j].msv);
                strcpy(sv[i].ho_ten, sv[j].ho_ten);
                sv[i].tuoi = sv[j].tuoi;
                sv[i].diem_giua_ky = sv[j].diem_giua_ky;
                sv[i].diem_cuoi_ky = sv[j].diem_cuoi_ky;
                sv[i].diem_tb = sv[j].diem_tb;

                strcpy(temp.msv, sv[j].msv);
                strcpy(temp.ho_ten, sv[j].ho_ten);
                temp.tuoi = sv[j].tuoi;
                temp.diem_giua_ky = sv[j].diem_giua_ky;
                temp.diem_cuoi_ky = sv[j].diem_cuoi_ky;
                temp.diem_tb = sv[j].diem_tb;
             }
        }
    }
    for (int i = 0; i < 10; i++){
        cout << "MSV cua sv " << i << " : " << sv[i].msv << endl;
        cout << "Ho ten cua sv " << i << " : " << sv[i].ho_ten << endl;
        cout << "Tuoi cua sv " << i << " : " << sv[i].tuoi << endl;
        cout << "Diem giua ky cua sv " << i << " : " << sv[i].diem_giua_ky << endl;
        cout << "Diem cuoi ky cua sv " << i << " : " << sv[i].diem_cuoi_ky << endl;
        cout << "Diem trung binh cua sv " << i << " : " << sv[i].diem_tb << endl;
    }
    cout << "Học lực cua sv:" << endl;
    for(int i = 0; i <= 10; i++){
        if(sv[i].diem_tb >= 8){
            cout << "Hoc luc cua sv" << i << " Gioi " << endl;
        }
        else if(sv[i].diem_tb >=  6.5){
            cout << "Hoc luc cua sv" << i << " Kha " << endl;
        }
        else if(sv[i].diem_tb >= 5){
            cout << "Hoc luc cua sv" << i << " Trung binh " << endl;
        }
        else{
            cout << "Hoc luc cua sv" << i << " Yeu " << endl;
        }
    }
    return 0;
}