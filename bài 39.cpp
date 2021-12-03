#include <iostream>
using namespace std;
//Hien thi phan tu chia het cho 2
void hien_thi(int arr[]){
    cout << "Cac phan tu chia het cho 2:" << endl;
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
    }
}
int main(){
    int arr[5],i = 0;
    cout << "Nhap cac phan tu cua mang:" << endl;
    for(i = 0; i < 5; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    hien_thi(arr);
    return 0;
}