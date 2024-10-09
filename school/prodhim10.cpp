#include <iostream>

using namespace std;

int main(){
    int p = 0;

	for(int i = 1; i <= 10; i++){
        p *= i;
    }
    cout << "Prodhimi i nr 1-10 eshte: " << p;

	return 0;
}