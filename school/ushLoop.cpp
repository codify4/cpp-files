#include <iostream>

using namespace std;

int main(){
    int n;
    int s = 0;
    int nums;

    cout << "Sa numra do mbledhesh? ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Vendos nje numer: ";
        cin >> nums;

        s = s + nums;
    }

    cout << "Shuma eshte: " << s;

	return 0;
}