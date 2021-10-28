#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= 9; i++){
		for( int j = 0; j <= 9; j++){
			for(int l = 0; l <= 9; l++){
				if(i + j + l == n){
					cout << i * 100 + j * 10 + l << ", "; 
				}
			}
		}
	}
}
