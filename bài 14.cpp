#include <iostream>
  
using namespace std;
int main(){
    float i,a,b,a_giai_thua = 1,b_giai_thua = 1;
        cout << "a = "; 
        cin >> a;
        cout << "b = "; 
        cin >> b; 
    for (int i = 1; i <= a; i++) {
		a_giai_thua *= i;
        }
    for (int i = 1; i <= b; i++) { 
		b_giai_thua *= i;
     	}
    cout << "a!/b! = " << a_giai_thua/b_giai_thua << endl;
	return 0;
}