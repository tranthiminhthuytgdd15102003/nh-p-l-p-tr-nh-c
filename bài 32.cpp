#include <iostream>
using namespace std;
int main() {
	int n, m, i, j;
	int a[100][100] = {};
	cout << "Nhập số phần tử của mảng: ";
	cin >> n >> m;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			cin >> a[i][j];
	cout << "Ma tran:" << endl;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	for(i=0; i<n; i++){
		int sum1 = 0;
		for(j=0; j<m; j++)
			sum1 += a[i][j];
		cout << "Tong hang " << i+1 << " la:" << sum1 << endl;
	}
	for(j=0; j<m; j++){
		int sum2 = 0;
		for(i=0; i<n; i++)
			sum2 += a[i][j];
		cout << "Tong cot " << j+1 << " la:" << sum2 << endl;
	}	
    return 0;
}