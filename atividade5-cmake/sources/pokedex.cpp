#include "pokedex.hpp"

#include <iostream>
#include <cstdio>
using namespace std;

int menu() {

    cout << "1) Inserir Pokemon " << endl;
    cout << "2) Sair " << endl;
    cout << ":: ";

    int n = 0;
    while(scanf("%d", &n), n != 1 && n != 2) {
        cout << "Voce inseriu uma opcao invalida." << endl;
        cout << ":: ";
    }

    return n;
}
