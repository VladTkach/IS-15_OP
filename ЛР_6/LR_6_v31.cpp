#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
double F1(double x){
	return pow(M_E, -pow(x, 2));
}

double F2(double x){
	return 2/x * cos(x/2);
}

double F3(double x){
	return log(1 + pow(x, 2));
}


double integral(double a, double b, double F(double), double g){
	int n = 2;
	double h = (b - a);
	double a1, a2 = h*F(a + h);
	do{	
		a1 = a2;
		a2 = 0;
		h = (b - a)/n;
		for(int i = 1; i<=n; i++){
			a2 +=F(a+i*h);
		}
		a2 = a2 * h;
		n++;
	}
	while(fabs(a2 - a1) > g);
	return a2;
}

int main(){
	double e;
	cin >> e;
	double a = 0.818, b = 1.403, c = 3.141;
	double rez = integral(a, b, F3, e) +  integral(b, c, F2, e) -  integral(a, c, F1, e);
	
//	cout << integral(a, b, F3, e) << " " << integral(b, c, F2, e) << " " << integral(a, c, F1, e) << endl;
	cout << rez;
	
}
