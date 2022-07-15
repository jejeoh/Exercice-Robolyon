#include <iostream>

#include <time.h>
#include <cstdlib>

using namespace std;

// Ceci est purement un test


int main(){

    cout << "Donnez moi le nombre ou vous voulez la somme de ses nombres : ";
    int nomb(0);
    int dem(0);
    int test(0);
    bool no(false);
    srand(time(NULL));
    nomb = rand()%500;
    cin >> dem;


    while(nomb != dem){
        test++;
    

        if(dem < nomb){
            cout << "Trop petit essaye encore !" << endl;
        }else{
            cout << "Trop grand essaye encore !" << endl;
        }

        if(test == 10) {
            no = true;
            break;
        }
        cin >> dem;
    }

    if(no){
        cout << "Dommage tu n'a pas trouve la bonne reponse, c'etait : " << nomb;
        return 0;
    }

    cout << "Bien joue la bonne reponse etait bien " << nomb;

    return 0;
}