#include <iostream>

using namespace std;

int fibonacciSequence(int length, int n1, int n2, int nextNum);

int main(){
	
	int length, n1 = 0, n2 = 1, nextNum = 0;
    int fsum = 0;

    cout << "How long do you want the sequence to be? ";
    cin >> length;

    fibonacciSequence(length, n1, n2, nextNum);
}
int fibonacciSequence(int length, int n1, int n2, int nextNum){
    
    for(int i = 1; i <= length; i++){
        cout << nextNum << ", ";
        n1 = n2;
        n2 = nextNum;
        nextNum = n1 + n2;
    }
}