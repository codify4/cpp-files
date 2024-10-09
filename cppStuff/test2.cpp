#include <iostream>
using namespace std;

int main(){
	int n, m;
	cout << "Jep nr. e rreshtave dhe nr. kolonave: \n";
	cin >> n >> m;

	int a[n][m];

	bool isIdentity = true;

	cout << "Jep elementet e matrices: \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(n == m){
				if(i == j && a[i][j] != 1){
					isIdentity = false;
					break;
				}
				if(i != j && a[i][j] != 0){
					isIdentity = false;
					break;
				}
			}
			else {
				break;
			}
		}
		if(!isIdentity) {
				break;;
			}
	}

	if(isIdentity) {
		cout << "Matrica eshte identitet.\n";
	}
	else {
		cout << "Matrica nuk eshte identitet.\n";
	}
	
}