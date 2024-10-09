#include <iostream>

using namespace std;

int main(){
	int sh = 0;
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        sh = sh + (i * i * i);
    }

    cout << "Shuma eshte: " << sh;
	return 0;
}