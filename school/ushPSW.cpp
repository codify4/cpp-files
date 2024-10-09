#include <iostream>

using namespace std;

int main(){
	
    string emerMbiemer;
    int mosha;
    string psw;
    string confPsw;

    cout << "Emer Mbiemer: ";
    getline(cin, emerMbiemer);
    cout << "Mosha: ";
    cin >> mosha;
    cout << "Pasword(minimumi 8 karaktere): ";
    cin >> psw;
    cout << "Konfirmo Paswordin: ";
    cin >> confPsw;

    if(psw == confPsw){
        cout << "Mire se erdhet!";
    }
    else if(psw != confPsw){
           cout << "Error! Provoni perseri!\n";
    }
	return 0;
}