#include <iostream>

using namespace std;

// Ceci est purement un test

/*
 * bon flemme de refaire la même chose que le losange
 * tu pourrait utiliser un tableau de char pour economiser de la mémoir
 * tu pourrais aussi afficher sans stocker
 * et les nom des variable, fait les en anglais et t'embete pas a abrevier
 * les abreviation ca rend plus difficile a comprendre et ton ide fait la completion pour toi donc c'est pas chiant les nom long
 * hormis ca, c'est trés propre
 */
int main(){

    cout << "Donnez moi la hauteur de la pyramide : ";

    int ha(0);

    cin >> ha;
    int nv(0);
    int nb(0);
    int niv(0);
    int nombre(0);
    string st("");
    nv = ha *2;

    while(ha != nb){
        nb++;
        niv = nb*2;
        nombre = (nv - niv)/2;
        for(int nomb = 0; nomb != nv; nomb++){
            if(nombre != 0){
                st = st + "_";
                nombre--;
            }else if(niv != 0){
                st = st + "*";
                niv--;
            }else{
                st = st + "_";
            }
        }
        cout << st << endl;
        st = "";
    }


    return 0;
}