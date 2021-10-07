#include <bits/stdc++.h>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	float p;
	p =( a + b + c) / 2;
	float S;
	S = sqrt( p * (p - a) * (p - b) * (p - c));
	float R;
	R = a*b*c/4/S;
	float r;
	r = 2*S/(a+b+c);
	float bi1;
	bi1 = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
	float bi2;
	bi2 = sqrt(b * c * (b + c + a) * (b + c - a)) / (b + c);
	float bi3;
	bi3 = sqrt(a * c * (a + c + b) * (a + c - b)) / (a + c);
	cout << bi1 << endl << bi2 << endl << bi3 << endl << r << endl << R;	
}
