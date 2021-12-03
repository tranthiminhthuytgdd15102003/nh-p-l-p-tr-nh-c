#include <iostream>
using namespace std;
int main(){
    for(int i = 2; i < 100000; i++){
        int dem = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                dem++;
            }
        }
        if(dem == 0){
            if(i > 9999){
                cout << i << endl;
            }  
        }
    }
    return 0;
}