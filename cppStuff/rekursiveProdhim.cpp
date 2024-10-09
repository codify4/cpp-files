#include <iostream>
using namespace std;


int prodhim(int b, int c) {

    if (b < c)
        return prodhim(c, b);
    else if (c != 0)
        return b + prodhim(b, c - 1);
    else
        return 0;
}

int main() {

    int b, c;
    cout << "Jep faktoret e prodhimit: " << endl;
    cin >> b >> c;

    cout << "Prodhimi i " << b << " dhe " << c << " eshte: " << prodhim(b, c) << endl;
}