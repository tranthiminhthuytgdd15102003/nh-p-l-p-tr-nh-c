#include <iostream>
using namespace std;
int main(){
    int i = 100000,temp,chu_so,so_nghich = 0;
    for (i = 100000; i < 1000000; i++){
        temp = i;
        while(temp != 0){
            chu_so = temp % 10;
            temp /= 10;
            so_nghich = so_nghich * 10 + chu_so;
        }
        if(so_nghich == i){
            cout << i << endl;
        }
    }
        return 0;
}