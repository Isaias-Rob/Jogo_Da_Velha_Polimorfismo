#pragma once

#include "Jogador.h"
#include <iostream>
#include <string>

using namespace std;

class Jogador; // DEFINIÇÃO DA CLASSE JOGADOR POIS SERÁ USADA NA CLASSE TABULEIRO E VICE VERSA
class Tabuleiro
{
public:
    string coord[9]; // COORDENADAS DO TABULEIRO (APESAR DE SER 3X3 TAMBÉ PODE SER UM VETOR DE 9 POSIÇÕES)
    Tabuleiro()
    {
        for(int i = 0; i < 9; i++)
        {
            coord[i] = "+"; // ZERAR TABULEIRO (CONSTRUTOR E NÃO FUNÇÃO PARA ZERAR), LUGARES VAGOS REPRESENTADO POR +
        }
    }

    void info(); // DEFINIÇÃO DAS FUNÇÕES
    void posi();
    bool checa(Jogador& jog1, Jogador& jog2);
    void zera();
};