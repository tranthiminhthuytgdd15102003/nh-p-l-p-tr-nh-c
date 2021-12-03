#include <iostream>
using namespace std;
//Nhap n
int nhap_n(){
    int n;
    cin >> n;
    return n;
}
int * nhap_mang(int n, int arr[], int *pt){
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    pt = arr;
    return pt;
}
void sap_xep(int n, int arr[]){
    int temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = i; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
}
int main(){
    int n;
    n = nhap_n();
    int arr[n];
    int *pt;
    pt = nhap_mang(n, arr, pt);
    sap_xep(n, arr);
    return 0;
}