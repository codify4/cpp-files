#include <iostream>

using namespace std;

int main(){
	int sh = 0;
    int a = 1;
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        sh = sh + a;
        a = a * 10 + 1;
    }
    cout << sh;

	return 0;
}