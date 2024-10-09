#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    cout << "Jep Numrat: \n";

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << '\n';

    cout << "Numrat: \n";
    for(int j = 0; j < n; j++){
        cout << a[j];
    }

    cout << '\n';

    cout << "Numrat reverse: \n";
    for(int k = n - 1; k >= 0; k--){
        cout << a[k];
    }
	
}