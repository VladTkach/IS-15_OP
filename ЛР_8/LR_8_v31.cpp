#include <bits/stdc++.h>
using namespace std;

void mas_in( double *a[], int n){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = (double)(rand()) / RAND_MAX * 100;
		}
		
	}
}

void mas_copy( double *a[], double *b[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[i][j] = a[i][j];
		}
		
	}
}



int get_cross(double *a[], int n){
		return a[n / 2][n / 2];
}

void mas_perm(double *a[], int n){
	for(int i = 0; i < n / 2; i++){
		for(int j = 0 + i ; j < n - i; j++){
			int c = a[i][j];
			a[i][j] = a[n - i - 1][j];
			a[n - i - 1][j] = c;
		}
	}
}

void mas_out( double *a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << fixed << setprecision(2) << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n;
	cout << "ENTER size: ";
	cin >> n;
	double A[n][n];
	double B[n][n];
	double *a[n];
	double *b[n];
	for(int i = 0; i < n; i++){
		a[i] = &A[i][0];
		b[i] = &B[i][0];
	}
	mas_in(a, n);
	mas_copy(a, b, n);
	mas_out(b, n);
	if(n % 2 == 0){
		cout << "No Permotion" << endl;
	}
	else
	cout << "Perm: " << get_cross(a, n) << endl;
	mas_perm(b, n);
	mas_out(b, n);
}
