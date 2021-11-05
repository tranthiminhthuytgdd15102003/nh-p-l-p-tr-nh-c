#include <iostream>
using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++){
        cout << "Nhap vao phan tu a[" << i <<"]: ";
        cin >> a[i];
	}
}
int max(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int min(int a[], int n){
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main(){
    int a[10000];
    int n;
    cout << "Nhap n = ";
    cin >> n;
    nhap(a, n);
    cout << "Max = " << max(a, n) << endl;
    cout << "Min = " << min(a, n) << endl;
    return 0;
}