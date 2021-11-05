#include <iostream>

using namespace std;

int main(){
	int i = 1;
	for(i = 1; i < 100; i++){
	    if(i % 10 == 0){
			continue;;
		}
	    cout << i << endl;
	}
    return 0;
}