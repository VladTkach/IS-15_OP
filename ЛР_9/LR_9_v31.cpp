#include <bits/stdc++.h>
using namespace std;

int get_index(string text , char b, int i){
	int index = i;
	for(i; i <= text.length() - 1;i++){
		if(text[i] == ' '){
			return index;
		}
		else if(i == text.length() - 1 && text[i] == b || text[i] == b && text[i + 1] == ' '){
			return i + 2;
		}
	}
	return index;
}

string text_remove(string text, char a, char b, int &remove){
	for(int i = 0; i <= text.length() - 1; i++){
		if(text[i] == a && text[i - 1] == ' ' || i == 0 && text[i] == a ){
			int index = get_index(text, b, i);
			text.erase(i,  index - i );
			if(index - i != 0){
				remove++;
			}
		}
	}
	return text;
}

int main(){
	cout << "Enter text: ";
	string text;
	getline(cin, text);
	char a, b;
	cout << "Enter first symbol: ";
	cin >> a;
	cout << "Enter last symbol: ";
	cin >> b;
	int remove = 0;
	cout<< "New text: " << text_remove(text, a, b, remove) << endl;
	cout << "Number of remove: " << remove;
}
