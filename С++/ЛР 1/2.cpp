#include <iostream>
using namespace std;

int main() {
	int matrix[10][10] = { };
	int *ptr = &matrix[0][0];
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			*ptr = i * j;
			ptr++;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;

}