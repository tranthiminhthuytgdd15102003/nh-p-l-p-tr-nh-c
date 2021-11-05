#include <iostream>
using namespace std;
void hcn( int m, int n ) {
    int i, j;
    for( i = 1; i <= m; i++ )
		for( j = 1; j <= n; j++ )       
		{
            if( i == 1 || i == m || j == 1 || j == n )
            {
                cout << "*";
                if( j == n )
                    cout << "\n";
            }
            else
                cout << " " ; 
                
        }
}
int main() {
    int m = 5, n = 5;
    hcn( m, n );
    return 0;
} 
