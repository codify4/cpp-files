#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char getPlayerChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main(){

    char player;
    char computer;

    char exit;
    while(true){
        player = getPlayerChoice();
        cout << "Your choice is: ";
        showChoice(player);
        cout << '\n';

        computer = getComputerChoice();
        cout << "Computer's choice is: ";
        showChoice(computer);
        cout << '\n';

        showWinner(player, computer);
        
        cout << "Do you want to close the program?(y/n)";
        cin >> exit;

        if(exit == 'y' || exit == 'Y'){
            cout << "BYE! :( \n";
            break;
        }else if(exit == 'n' || exit == 'N'){
            continue;
        }
        
    }


    return 0;
}

char getPlayerChoice(){
    
    char player;
    cout << "*********ROCK PAPER SCISORS***********\n";

    do{
        cout << "Pick an option: \n";
        cout << "r for Rock. \n";
        cout << "p for Paper. \n";
        cout << "s for Scissors.\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

	return player;
}
char getComputerChoice(){
    
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r'; 
    case 2: return 'p';    
    case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r': cout << "Rock";
            break;
    case 'p': cout << "Paper";
            break;
    case 's': cout << "Scissors";
            break;
    }
}
void showWinner(char player, char computer){

    switch (player)
    {
    case 'r': if(computer == 'r'){
                    cout << "DRAW!\n";
                }else if(computer == 'p'){
                    cout << "YOU LOST!\n";
                }else if(computer == 's'){
                    cout << "YOU WON!\n";
                }
                break;
    case 'p': if(computer == 'r'){
                    cout << "YOU WON!\n";
                }else if(computer == 'p'){
                    cout << "DRAW!\n";
                }else if(computer == 's'){
                    cout << "YOU LOST!\n";
                }
                break;
    case 's': if(computer == 'r'){
                    cout << "YOU LOST!\n";
                }else if(computer == 'p'){
                    cout << "YOU WON!\n";
                }else if(computer == 's'){
                    cout << "DRAW!\n";
                }
                break;
    }
}