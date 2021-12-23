#include <iostream>
using namespace std;
int nhap_n(){
    int n;
    cin >> n;
    return n;
}
void nhap_A(int n, int A[]){
    for (int i = 0; i < n; i++){
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
}
void hien_thi(int n, int A[], int p1, int p2){
    for (int i = 0; i < n; i++){
        if(A[i] >= p1 && A[i] <= p2){
            cout << A[i] << endl;
        }
    }
}
int main(){
    cout << "n = ";
    int n = nhap_n();
    int A[n];
    nhap_A(n, A);
    cout << "p1 = ";
    int p1 = nhap_n();
    cout << "p2 = ";
    int p2 = nhap_n();
    hien_thi(n, A, p1, p2);
    return 0;
}
