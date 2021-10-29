#include <iostream>
using namespace std;
int main(){
    int a, tong = 0;
	  cout << "a = ";
    cin>>a;
    for(int i=1; i<=a; i++){
		if (i % 3 == 0){
			tong += i;
		}   
    }
    cout << tong;
    return 0;
}