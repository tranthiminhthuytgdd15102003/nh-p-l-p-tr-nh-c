#include <iostream>
using namespace std;
int main() {
	int n, i, j, tich1, tich2;
	int a[100][100] = {};
	cout << "Nhập số phần tử của mảng: ";
	cin >> n;
	tich1 = 1;
	tich2 = 1;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			cin >> a[i][j];
	cout << "Ma trận:" << endl;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	for(i=0; i<n; i++){
		tich1 *= a[i][i];
	j = n - 1;
	}
	for(i=0; i<n; i++){
		tich2 *= a[i][j];
		j--;
	}
	cout << "Tích đường chéo từ trái sang: " << tich1 << endl;
	cout << "Tích đường chéo từ phải sang: " << tich2 << endl;
    return 0;
}