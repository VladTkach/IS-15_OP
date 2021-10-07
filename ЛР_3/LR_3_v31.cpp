#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main() {
	
	float x, s = 0;
	cin >> x;
	int i = 1;
	float g = 0.000001;
	float a1;
	float a2 = 1;
	
	do{  
		a1 = a2;
		a2 = pow(-1, i) * pow(x, i) / (i + 1);
		s += a1;
		i++;
	}
	while(fabs(a2 - a1) > g);
	cout << fixed << setprecision(6) << s;
}
