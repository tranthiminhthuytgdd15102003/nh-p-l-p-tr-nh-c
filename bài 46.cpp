#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char chuoi[100], str(100);
    cout << "Nhap chuoi: ";
    cin.getline(chuoi, 100);
    for(int i = 0, i < strlen(str); i++){
        str[i] = str[strlen(str) - 1 - i];
    }
    cout << "Sau khi dao nguoc: " << str << endl;
    return 0;
}
