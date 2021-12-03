#include <iostream>
using namespace std;
int nhap(){
    int n;
    cin >> n;
    return n;
}
void tim_max(int n, int arr[]){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Phan tu lon nhat cua mang la: " << max << endl;
}
void tim_min(int n, int arr[]){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Phan tu nho nhat cua mang la: " << min << endl; 
}
int main(){
    int n,max,min;
    n = nhap();
    int arr[n];
    cout << "Nhap cac phan tu cua mang: " << endl;
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    tim_max(n,arr);
    tim_min(n,arr);
    return 0;
}