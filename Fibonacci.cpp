#include<iostream>
using namespace std;

int main() {

	int n = 12, n1 = 0, n2 = 1, n3 = 0;

	cout << "1 ";
	for (int i = 1; i < n; i++) {
		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
		//hola
	}
	
	return 0;
}
