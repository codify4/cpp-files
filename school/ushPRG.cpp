#include <iostream>
using namespace std;
int main()
{
string l1, l2, l3;

cout << "Vendos lenden qe ke oren e pare: " << endl;
cin >> l1;
cout << "Vendos lenden qe ke oren e dyte " << endl;
cin >> l2;
cout << "Vendos lenden qe ke oren e trete: " << endl;
cin >> l3;

if(l1 == "anglisht" && l2 == "matematike" && l3 == "gjuhe")
{
cout << "Eshte dite e hene." << endl;
}
else
if(l1 == "anglisht" && (l2 == "matematike" || l3 == "gjuhe"))
{
cout << "Eshte dite e hene." << endl;
}
else{
cout << "Seshte dite e hene." << endl;
}
return 0;