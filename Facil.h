#include <iostream>
#include "Jogador.h"
#include <time.h>
#include <string>
using namespace std;

class Facil : public Jogador
{
public:
    Facil(int n) : Jogador(n){}  // CONSTRUTOR PARA JOGADOR, NECESSÁRIO INFORMAR NUMERO 1 OU 2

    void jogada(Tabuleiro& tab) // JOGADA EM NIVEL "FACIL", SORTEIA UM NUMERO ALEATORIO ATE ACHAR UM LOCAL VAGO
    {
        srand(time(NULL));
        int i = 0;
        while(true)
        {
            i = rand() % 8;
            if(tab.coord[i] == "+")
            {
                tab.coord[i] = "O";
                return;
            }
        }
    }
};