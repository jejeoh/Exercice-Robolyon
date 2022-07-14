#include <iostream>

using namespace std;

// Ceci est purement un test


int main(){

    cout << "Donnez moi la hauteur de la pyramide : ";

    int ha(0);

    cin >> ha;
    int nv(0);
    int nb(0);
    int niv(0);
    int nombre(0);
    int ht(0);
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
        cout << nb << st << endl;
        st = "";
    }
    nb = 0;
    while(ha != nb){

        niv = nb;
        nombre = nv - (niv*2);
        for(int nomb = 0; nomb != nv; nomb++){

            if(niv != 0){
                st = st + "_";
                niv--;
            }else if(nombre != 0){
                st = st + "*";
                nombre--;
            }else{
                st = st + "_";
            }
        }
        nb++;
        cout << nb << st << endl;
        st = "";
    }

    return 0;
}