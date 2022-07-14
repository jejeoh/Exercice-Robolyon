#include <iostream>
#include <cmath>

using namespace std;

// Ceci est purement un test


int main(){

    cout << "Donnez moi le nombre ou vous voulez savoir si il est premier : ";

    float nomb(0);

    cin >> nomb;
    
    int verif(0);
    int nb(1);
    float total(0);
    int ve(0);

    if(nomb == 1 || nomb == -1){
      verif = 1;
    } 

    while(verif == 0){

        nb++;

        total = 0;

        total = nomb / nb;


        ve = total;

        if(total == ve && nb != nomb){
            verif = 1;
        }
    
        if(nb == 40) {
            verif = 2;
        }
    }

    if(verif == 1){
        cout << "Le nombre n'est pas premier car il est divisible par : " << nb;
    }else{
        cout << "Le nombre est premier";
    }



    return 0;
}