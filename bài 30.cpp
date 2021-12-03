#include <iostream>
using namespace std;
int main(){
    int n,arr[n],max,min;
    cout << "n = ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Phan tu lon nhat cua mang la: " << max << endl;
    cout << "Phan tu lon nho cua mang la: " << min << endl;
    return 0;
}