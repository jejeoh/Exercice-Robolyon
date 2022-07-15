#include <iostream>

using namespace std;

// Ceci est purement un test

int main(){

    cout << "Donnez moi le nombre ou vous voulez savoir si il est premier : ";
    int nomb(0);
    cin >> nomb;
    //int verif(0);
    //int nb(1);
    //float total(0);
    //int ve(0);
    if(nomb == 1){
        cout << "Le nombre n'est pas premier car 1 est exclu des nombre premier"<< endl;
    }
    for (int i = 2; i < nomb; ++i) {//pour optimiser il faudrait remplacer nomb par racine de nomb a cause de popriété mathématique mais flemme
        //on commence à 2 par ce que tout les nombres sont forcements divisible par 1 ca sert a rien de tester me 1
      if (nomb % i == 0 && i != nomb){// le symbole % c'est le reste de la division de nomb par i. donc si il reste 0 c'est que c'est divisible
          cout << "Le nombre n'est pas premier car il est divisible par : " << i << endl;
          return 0;//on arrete totalement le programme
      }
    }
    cout << "Le nombre est premier" << endl;
    /*
    while(verif == 0){
        nb++;
        total = 0;
        total = nomb / nb;
        ve = total;
        if(total == ve && nb != nomb){
            verif = 1;
        }
        if(nb == 40) {//euuuuu pk 40 ?
            verif = 2;
        }
    }


    if(verif == 1){
        cout << "Le nombre n'est pas premier car il est divisible par : " << nb << endl;
    }else{
        cout << "Le nombre est premier" << endl;
    }
    */
    return 0;
}