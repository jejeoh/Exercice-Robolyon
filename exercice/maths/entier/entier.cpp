#include <iostream>

using namespace std;

// Ceci est purement un test


int main(){

    cout << "Donnez moi le nombre ou vous voulez la somme de ses nombres : ";

    int nomb(0);

    cin >> nomb;
    
    int nb(0);
    int total(0);
    string st("*");

    while(nomb != nb){
        nb++;

        total = total+ nb;

    }

        cout << total;

    return 0;
}