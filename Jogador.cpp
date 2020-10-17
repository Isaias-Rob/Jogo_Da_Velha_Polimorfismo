#include "Jogador.h"
#include <iostream>


void Jogador::jogada(Tabuleiro &tab) // FUNÇÃO VIRTUAL DE JOGADA, APENAS SE JOGADOR FOR UMA PESSOA
{
    int local;
    do
    {
        do
        {
            tab.info();
            tab.posi();
            cout << "\n\n" << endl;
            cout << "Digite o numero da sua jogada\n\n" << endl;
            fflush(stdin);
            cin >> local;
            system("CLS");
        } while (local < 0 || local > 8);

    } while (tab.coord[local] != "+");
    if (number == 1)
    {
        tab.coord[local] = "X";
    }
    else
    {
        tab.coord[local] = "O";
    }
}
void Jogador::info() // STATUS PLAYER
{
    cout << "PLAYER " << number << endl << endl;
    cout << "VITORIAS: " << vitoria << endl << "DERROTAS: " << derrota << endl << "EMPATES: " << empate << endl << endl;
    cout << endl;
    system("Pause");
}
