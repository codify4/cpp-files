#include <iostream>

using namespace std;

class Librari{
	public:
		static const int MAX_BOOKS = 100;
		string books[MAX_BOOKS];
		int books_count = 0;

		void add_book(string book){
			books[books_count] = book;
			books_count++;
		}

		void print_books(){
			for(int i = 0; i < books_count; i++){
				cout << books[i] << endl;
			}
		}

};

int main(){

	Librari l1;
	int bookNum;
	string title;

	cout << "Jep numrin e librave qe do futesh: ";
	cin >> bookNum;

	for(int i = 0; i < bookNum; i++){
		cout << "Jep titullin e librave qe do futesh: ";
		getline(cin, title);
		l1.add_book(title);
	}

	l1.print_books();
}