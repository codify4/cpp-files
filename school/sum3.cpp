#include <iostream>

using namespace std;

int main(){
	int sh = 0;
    int n;

    cin >> n;

    for(int i = 3; i <= n; i++){
        sh += i;
    }

    cout << "Shuma e numrave 3 deri " << n << " eshte: " << sh;
	return 0;
}