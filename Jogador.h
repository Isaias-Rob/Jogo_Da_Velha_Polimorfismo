#pragma once

#include <iostream>
#include <string>
#include "Tabuleiro.h"

using namespace std;

class Tabuleiro; // DEFINIÇÃO DA CLASSE TABULEIRO POIS SERÁ USADA NA CLASSE JOGADOR E VICE VERSA
class Jogador
{
public:
    int vitoria, empate, derrota, number; // STATUS
    Jogador() {}
    Jogador(int n)
    {
        vitoria = 0;
        empate = 0;
        derrota = 0;
        number = n;
    }
    
   
    virtual void jogada(Tabuleiro& tab); // DEFINIÇÃO DAS FUNÇÕES
    void info();




};