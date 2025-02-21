//c036»ØÎÄÊı
/*
num:12321
yes
*/
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	int num;
	int n, m;
	cout << "num:";
	cin >> num;

	n = num;
	m = 0;

	while (n > 0) {
		m = m * 10 + n % 10;
		n = n / 10;
	}

	if (m == num) {
		cout << "yes";

	} else {
		cout << "no";
	}
	return 0;
}