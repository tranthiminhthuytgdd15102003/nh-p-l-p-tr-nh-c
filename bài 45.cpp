#include <iostream>
using namespace std;
int main(){
    char hoten[100];
    cout << "Nhap ho va ten hoc sinh thu nhat: ";
    cin.getline(hoten, 100);
    cout <<"Ho va ten hoc sinh thu nhat: " << hoten << endl;
    char hoten1[100];
    cout << "Nhap ho va ten hoc sinh thu hai: ";
    cin.getline(hoten1, 100);
    cout <<"Ho va ten hoc sinh thu hai: " << hoten1 << endl;
    char hoten2[100];
    cout << "Nhap ho va ten hoc sinh thu ba: ";
    cin.getline(hoten2, 100);
    cout <<"Ho va ten hoc sinh thu ba: " << hoten2 << endl;
    char hoten3[100];
    cout << "Nhap ho va ten hoc sinh thu tu: ";
    cin.getline(hoten3, 100);
    cout <<"Ho va ten hoc sinh thu tu: " << hoten3 << endl;
    return 0;
}