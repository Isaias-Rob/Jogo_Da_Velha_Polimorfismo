#include <iostream>
#include "Jogador.h"
#include <time.h>
#include <string>

using namespace std;

class Dificil : public Jogador
{
public:
    Dificil(int n) : Jogador(n) {} // CONSTRUTOR DE JOGADOR, NECESSARIO INFORMAR NUMERO 1 OU 2
void jogada(Tabuleiro& tab) // JOGADA DE NIVEL NOMEADO DE "DIFICIL"
    {
        srand(time(NULL));
        bool c = true;
        int i, j = 0;
            for(j = 0; j < 3; j++) // IRÁ PROCURAR HORIZONTALMENTE E DIAGONALMENTE, CASO NAO ENCONTRE NENHUMA DESSAS LINHAS VAGAS, SORTEAR NUMERO
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
                        tab.coord[i] = "O"; // CASO ENCONTRE, PREENCHER LINHA EM SUAS JOGADAS
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
                c = true;
            }
            for(j = 0; j < 9; j = j + 4)
            {
                if(tab.coord[j] == "X")
                {
                    c = false;
                    break;
                }
            }
            if(c == true)
            {
                for(i = 0; i < 9; i = i + 4)
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
            for(j = 2; j < 7; j = j + 2)
            {
                if(tab.coord[j] == "X")
                {
                    c = false;
                    break;
                }
            }
            if(c == true)
            {
                for(i = 2; i < 7; i = i + 2)
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
                        tab.coord[i] = "O"; // NENHUMA LINHA LIVRE HORIZONTAL/ DIAGONALMENTE, SORTEAR NUMERO 
                        return;
                    }
                }
            }
    }
};