#include <iostream>
using namespace std;
void nhap(int a[], int n){
   int dem, i, j, k;
   for (j = 0; j < n; j++){
      for (k = j + 1; k < n; k++){
         if (a[j] > a[k]){
            dem = a[j];
            a[j] = a[k];
            a[k] = dem;
         }
      }
   }
   cout<<"Các số sau khi được sắp xếp tăng dần: ";
   for (i = 0; i < n; ++i)
      cout<<a[i]<<endl;
}
int main(){
   int i, n, a[20];
   cout<<"Nhập số lương phần tử trong mảng:";
   cin>>n;
   cout<<"Nhập giá trị cho từng phần tử trong mảng:";
   for (i = 0; i < n; ++i)
      cin>>a[i];
   nhap(a,n);
   return 0;
}