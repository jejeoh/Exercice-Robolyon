#include <iostream>

using namespace std;

// Ceci est purement un test


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
        cout << nb << st << endl;
        st = "*";
    }


    return 0;
}