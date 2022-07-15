#include <iostream>

using namespace std;

// Ceci est purement un test


int main() {
    cout << "Donnez moi la height de la pyramide : ";
    int height(0);
    cin >> height;
    int width;
    int lineCounter(0);
    int level;
    int number;
    //int ht(0); tu t'en sert jamais
    width = height * 2;
    //utiliser un string c'est pas faux mais un tableau de char c'est plus optimiser en therme d'utilisation de ram(mémoire)
    //string printString("");
    char printString[width+1];
    printString[width] = '\0';//si on fini pas par un \0 on peut pas cout simplement
    //sinon autre proposition, tu crée pas de variable pour stocker ce que tu affiche. tu l'affiche juste au fur et a mesure et a chaque nouvelle ligne tu ajouter un endl


    while (height != lineCounter) {
        lineCounter++;
        level = lineCounter * 2;
        number = (width - level) / 2;
        //ATTENTION ca n'es qu'une propostion, c'est pas mieux que ta version c'est pas moins bien. juste différent.
        //Et perso je le comprend plus facilement en suivant ma logique mais c'est personelle
        for (int counter = 0; counter < number; counter++) {
            printString[counter] = '_';
        }
        for (int counter = 0; counter < level; counter++) {
            printString[number + counter] = '*';
        }
        for (int counter = 0; counter < number; counter++) {
            printString[number + counter + level] = '_';
        }
        /*
        for(int nomb = 0; nomb < width; nomb++){//c'est plus safe même si dans ce cas la ca change rien
            if(number != 0){
                //proposition de juste afficher
                cout << "_";
                //printString = printString + "_";
                number--;
            }else if(level != 0){
                //proposition de juste afficher
                cout << "*";
                //printString = printString + "*";
                level--;
            }else{
                //proposition de juste afficher
                cout << "_";
                //printString = printString + "_";
            }
        }
         */
        cout << printString << endl;
        //printString = "";
    }
    lineCounter = 0;
    while (height != lineCounter) {
        level = lineCounter;
        number = width - (level * 2);
        //ATTENTION ca n'es qu'une propostion, c'est pas mieux que ta version c'est pas moins bien. juste différent.
        //Et perso je le comprend plus facilement en suivant ma logique mais c'est personelle
        for (int counter = 0; counter < level; counter++) {
            printString[counter] = '_';
        }
        for (int counter = 0; counter < number; counter++) {
            printString[level + counter] = '*';
        }
        for (int counter = 0; counter < level; counter++) {
            printString[number + counter + level] = '_';
        }
        /*for(int nomb = 0; nomb < width; nomb++){//c'est plus safe même si dans ce cas la ca change rien
            if(level != 0){
            //proposition de juste afficher
                cout << "_";
//                printString = printString + "_";
                level--;
            }else if(number != 0){
//            proposition de juste afficher
                cout << "*";
//                printString = printString + "*";
                number--;
            }else{
//            proposition de juste afficher
                cout << "_";
//                printString = printString + "_";
            }
        }*/
        lineCounter++;
        cout << printString << endl;
        // printString = "";
    }
    return 0;
}