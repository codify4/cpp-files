#include <iostream>

using namespace std;

int main(){
    int sh = 0;
    int p = 1;
    int x;

    cin >> x;
    for(int i = 1; i <= x; i++){
        if(i % 2 == 0){
                p *= i;
        }
        else{
                sh += i;
        }
    }
    
    cout << "PRODHIMI I NR CIFT ESHTE : " << p << '\n';
    cout << "SHUMA E NR TEK ESHTE : " << sh;
    return 0;
} 