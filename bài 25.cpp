#include <iostream>
using namespace std;
int main(){
    int n,temp,chu_so;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        int so_chu_so = 0, dem = 0;
        temp = i;
        //tim so chu so cua temp (i)
        while (temp > 0){
            temp /= 10;
            so_chu_so++;
        }
        temp = i;
        for (int j = 0; j < so_chu_so; j++){
            //tach lay chu so cuoi cung
            chu_so = temp % 10;
            //lay so con lai sau khi tach chu so cuoi cung
            temp /= 10;
            //Kiem tra i co chia het cho chu so vua tach hay k
            if(chu_so != 0){
                if(i % chu_so == 0){
                    dem++;
                }
            }
            if(dem == so_chu_so){
                cout << i << "\t" << endl;
            }
        }
    }
    return 0;
}