#include <iostream>
using namespace std;
int so_nguyen_to(int n);
int main(){
    int n, i;
    do{
        cout << "n = ";
        cin >> n;
    }while(n <= 0);
    cout << "Cac so nguyen to tu 1 den " << n << endl;
    for(i = 2; i <= n; i++){
        if(so_nguyen_to(i))
            cout << i << endl;
    }
}
int so_nguyen_to(int n){ 
    int i;
    if(n == 1)
        return 1;
    else{
        for( i = 2; i < n; i++){ 
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
}