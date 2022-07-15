#include <iostream>

using namespace std;

// Ceci est purement un test  ceci est une correction possible


int main(){
    cout << "Donnez moi le nombre ou vous voulez la somme de ses nombres : ";
    int nomb(0);
    cin >> nomb;
    int total(0);
    for (int nb = 1; nb<=nomb; ++nb) {//les boucle for c'est quand même assez utile
        total+=nb;
    }
    cout << total;
    return 0;
}