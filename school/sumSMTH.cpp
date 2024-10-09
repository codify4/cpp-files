#include <iostream>

using namespace std;

int main(){
    int n, sh;
    cin >> n;
    for(int i = 2; i <= n; i++){
        sh += i;
    }
    cout << "Shuma e numrave 2 deri " << n << " eshte : " << sh;

	return 0;
}