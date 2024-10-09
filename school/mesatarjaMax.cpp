
#include <iostream>

using namespace std;

int main(){
	double m;
    string e;
    double mMax = 0;
    string eMax;
    
    for(int i = 1; i <= 5; i++){
        cout << "Jep emrin: ";
        cin >> e;
        cout << "Jep mesataren e tij: ";
        cin >> m;

        if(m > mMax){
            mMax = m;
            eMax = e;
        }
    }
    cout << eMax << " me mesatare " << mMax;
	return 0;
}