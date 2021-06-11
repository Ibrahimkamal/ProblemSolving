#include<bits\stdc++.h>
using namespace std;


int fibonacci(int n) {
	// Complete the function.
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

//int main() {
//	int n;
//	cin >> n;
//	cout << fibonacci(n);
//	system("pause");
//	return 0;
//}