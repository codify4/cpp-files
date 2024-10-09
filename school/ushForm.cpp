#include <iostream>

using namespace std;

int main(){
	
	string emerMbiemer;
    char gjinia;

    cout << "Emer Mbiemer: ";
    getline(cin, emerMbiemer);
    cout << "Gjinia(m/f): ";
    cin >> gjinia;

    if(gjinia == 'm' || gjinia == 'M'){
        cout << "Mireserdhe zoti " << emerMbiemer << '\n';
    }else if(gjinia == 'f' || gjinia == 'F'){
        cout << "Mireserdhe zonja " << emerMbiemer << '\n'; 
    }else{
        cout << "Error! Provoni perseri!\n";
    }
    

	 
	return 0;
}