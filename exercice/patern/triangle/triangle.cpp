#include <iostream>

using namespace std;

// Ceci est purement un test

/*
 * bon bas je change pas de commentaire que tu a dans pyramide et losange
 * tu peut utiliser un tableau de char pour le texte
 * tu peut uniquement afficher le texte en utilisant cout sans les stocker dans ton string
 * et fait des nom de variable complet et en anglais
 * sinon c'est nickel bravo !
 */

int main(){

    cout << "Donnez moi la hauteur du triangle : ";

    int ha(0);

    cin >> ha;
    
    int nb(0);
    string st("*");

    while(ha != nb){
        for(int nomb = 0; nomb != nb; nomb++){
                st = st + "*";
        }
        nb++;
        cout << st << endl;
        st = "*";
    }


    return 0;
}