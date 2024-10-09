#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if ( n >= 0 && n < 10) // kur numri eshte me i vogel se 10 kthejme thjesht numrin
        return n;
    else 
        return n % 10 + sumOfDigits(n / 10); // n % 10 na jep njeshet, qe i mbledhim me pjesen tjeter qe mbetet dmth n / 10
}

int main() {
    int n;

    cout << "\nJep numrin: ";
    cin >> n;

    cout << "Shuma eshte: " << sumOfDigits(n);
}