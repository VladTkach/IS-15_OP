#include <bits/stdc++.h>
using namespace std;

void mas_in(int *mas, int n){
	for(int i = 0; i < n;i++){
		mas[i] = rand() % 100;
	}
}

void mas_per(int *mas, int *rez, int n){
	int sum_r = 0, sum_l = 0;
	int index_r = n - 1;
	int index_l = 0;
	
	for(int i = n - 1; i >=0; i--){
		if(sum_r <= sum_l && index_r >= n/2){
			rez[index_r] = mas[i];
			sum_r += mas[i];
			index_r--;
		}
		else{
			rez[index_l] = mas[i];
			sum_l += mas[i];
			index_l++;
		}
	}	
	cout << sum_l << " " << sum_r << endl;
}

int main(){
	int n;
	cin >> n;
	int b[n];
	mas_in(b, n);
	sort(b, b + n);
	
	int a[n];
	mas_per(b, a, n);
	
	for(int i = 0; i < n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
