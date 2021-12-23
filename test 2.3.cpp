#include <iostream>
using namespace std;
int nhap_n(){
    int n;
    cin >> n;
    return n;
}
void nhap_arr(int n, float arr[]){
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void hien_thi(int n, float arr[]){
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
  cout << endl;
}
void sap_xep(int n, float arr[]){
    float temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    hien_thi(n, arr);
}
void chen(int n, float arr[]){
    float x;
    cout << "x = ";
    cin >> x;
    n++;
    arr[n-1] = x;
    sap_xep(n, arr);
}
int main(){
    int x = 40, y = 4;
    while (x != y){
        if(x > y) x = x - y;
        else y = y - x;
    }
    cout << x << endl;
    return 0;
}