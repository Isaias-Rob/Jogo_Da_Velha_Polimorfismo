#include <iostream>
#include "Jogador.h"
#include <time.h>
#include <string>

using namespace std;

class Medio : public Jogador
{
public:
    Medio(int n) : Jogador(n){} // CONSTRUTOR JOGADOR, NECESSARIO INFORMAR NUMERO 1 OU 2

    void jogada(Tabuleiro& tab) // OUTRO PADRÃO DE JOGO,NOMEADO DE "MEDIO", PROCURA ESPAÇOS VAGOS HORIZONTALMENTE, CASO NAO ACHE SORTEIRA UM NUMERO ALEATORIO
    {
        srand(time(NULL));
        bool c = true;
        int i, j = 0;
            for(j = 0; j < 3; j++)
            {
                if(tab.coord[j] == "X")
                {
                    c = false;
                    break;
                }
            }
            if(c == true)
            {
                for(i = 0; i < 3; i++)
                {
                    if(tab.coord[i] == "+")
                    {
                        tab.coord[i] = "O"; // CASO ACHE ESPAÇOS VAGOS NA HORIZONTAL, TENTA PREENCHER TODA LINHA NAS JOGADAS
                        return;
                    }
                }
                
            }
            else
            {
                c = true;
            }
            for(j = 3; j < 6; j++)
            {
                if(tab.coord[j] == "X")
                {
                    c = false;
                    break;
                }
            }
            if(c == true)
            {
                for(i = 3; i < 6; i++)
                {
                    if(tab.coord[i] == "+")
                    {
                        tab.coord[i] = "O";
                        return;
                    }
                }
                
            }
            else
            {
                c = true;
            }
             for(j = 6; j < 9; j++)
            {
                if(tab.coord[j] == "X")
                {
                    c = false;
                    break;
                }
            }
            if(c == true)
            {
                for(i = 6; i < 9; i++)
                {
                    if(tab.coord[i] == "+")
                    {
                        tab.coord[i] = "O";
                        return;
                    }
                }
                
            }
            else
            {
                while(true)
                {
                    i = rand() % 8;
                    if(tab.coord[i] == "+")
                    {
                        tab.coord[i] = "O"; // NENHUMA HORIZONTAL VAGA, SORTEAR NUMERO
                        return;
                    }
                }
            }
    }


};