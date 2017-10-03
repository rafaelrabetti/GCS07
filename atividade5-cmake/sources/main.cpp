#include <cstdio>
#include <iostream>
#include "pokemon.hpp"
#include "pokedex.hpp"
#include "version.hpp"

using namespace std;

int main()
{
    cout << "Bem-vindo a Pokedex " << pokedex_VERSION_MAJOR << "." <<
                                      pokedex_VERSION_MINOR << " !" << endl;

    int m = 0;
    while(m = menu(), m == 1) {
        cout << "Insira um numero de 1 a 151!" << endl;

        int n = 0;
        while (scanf("%d", &n), n < 1 || n > 151) {
            cout << "Voce inseriu um numero invalido!" << endl;
        }

        cout << "Voce escolheu o pokemon de numero " << n << endl;
        print_pokemon(n);
    }

    cout << "Volte sempre!" << endl;

    return 0;
}
