#include <iostream>

#include <time.h>
#include <cstdlib>

using namespace std;

// Ceci est purement un test

/*
 * c'est bien mais il manque la prise en compte des nombre plus petit que 0 et plus quand que 500
 */

int main() {
    cout << "Donnez moi le nombre ou vous voulez la somme de ses nombres : ";
    int numberToFind(0);
    int inputNumber(0);
    int tryCounter(0);
    bool gameOver(false);
    srand(time(NULL));
    numberToFind = rand() % 500;
    cin >> inputNumber;
    while (numberToFind != inputNumber) {
        tryCounter++;
        if (inputNumber<0 || inputNumber > 500){
            cout << "Vous avez entré un nombre qui n'est pas compris entre 0 et 500 veuillez retenter" << endl;
            tryCounter--;//on ne compte pas cet essai
        }
        else if (inputNumber < numberToFind) {
            cout << "Trop petit essaye encore !" << endl;
        } else {
            cout << "Trop grand essaye encore !" << endl;
        }
        if (tryCounter >= 10) {//c'est plus safe au cas ou sur un malentendu il y a un + 2
            gameOver = true;
            break;
        }
        cin >> inputNumber;
    }

    if (gameOver) {
        cout << "Dommage tu n'a pas trouve la bonne reponse, c'etait : " << numberToFind;
        return 0;
    }
    cout << "Bien joue la bonne reponse etait bien " << numberToFind;
    return 0;
}