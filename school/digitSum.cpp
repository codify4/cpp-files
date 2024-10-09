#include <iostream>

using namespace std;

int main(){
	int x, dh, nj;
    int sh = 0;
    cout << "Jep numrin: ";
    cin >> x;

    for(int i = 0; i < 1 ; i++){
        nj = x % 10;
        sh = sh + nj;
        dh = x / 10;
        sh = sh + dh;
    }
    cout << "Shuma eshte: " << sh;
	return 0;
}