#include <iostream>

using namespace std;

int main(){
	int orePune, lekPh, paga;
    int max = 0;
    int min = 999999999;

    for(int i = 1; i <= 5; i++){
        cout << "Jep oret e punes dhe parate/h: ";
        cin >> orePune >> lekPh;
        paga = orePune * lekPh;

        if(paga > max){
            max = paga;
        }
        else if(paga < min){
            min = paga;
        }
    }

    cout << "Paga me e madhe: " << max << '\n';
    cout << "Paga me e vogel: " << min << '\n';

	return 0;
}