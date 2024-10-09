#include <iostream>
using namespace std;


int fib(int n) {

    if (n == 0 || n == 1)
        return n; // Fibonacci i 0 eshte 0 dhe Fibonacci i 1 eshte 1
    else
        return fib(n - 1) + fib(n - 2); // Fibonacci i n eshte fibonacci i n-1 + fibonacci i n-2
}

int main() {

    int n, i = 0;

    cout << "\nJep gjatesine e serise: ";
    cin >> n;

    cout << "\nSERIA FIBONACCI: \n";

    // printojme serine fibonacci
    while (i < n) {
        cout << " " << fib(i); // vendosim i si parameter qe do inkrementohet per sa kohe qe eshte me e vogel se n, e marre nga useri
        i++;
    }
}