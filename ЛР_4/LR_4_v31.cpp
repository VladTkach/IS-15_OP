#include <iostream>
using namespace std;
int main() {
	int m, s = 0;
	string n;
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		s += n[n.length() - i] - '0';
	}
	cout << s;
}
