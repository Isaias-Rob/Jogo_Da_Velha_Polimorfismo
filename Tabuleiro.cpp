#include "Tabuleiro.h"
#include <iostream>

void Tabuleiro::info() // PRINT DO TABULEIRO
{
    for (int i = 0; i < 9; i++)
    {
       cout << " " << coord[i] << " ";
       if(i == 2 || i == 5 || i == 8)
       {
           cout << endl;
       }
    }
}
void Tabuleiro::posi() // EXPLICAÇÃO DAS COORDENADAS PARA INSERÇÃO NO TABULEIRO
{
    cout << "\n\nO NUMERO CORRESPONDENTE DAS COORDENADAS (escolha as livres com o sinal de +)\n" << endl;

    for (int i = 0; i < 9; i++)
    {
       cout << " " << i << " ";
       if(i == 2 || i == 5 || i == 8)
       {
           cout << endl;
       }
    }
    
}
bool Tabuleiro::checa(Jogador& jog1, Jogador& jog2) // CHECAGEM, CHECA-SE AS POSIÇÕES HORIZONTAIS, VERTICAIS E DIAGONAIS PARA OS DOIS PLAYERS, E TAMBÉM SE O TABULEIRO ESTÁ LOTADO
{
    int local = 0;
    if(coord[0] == "X" && coord[1] == "X" && coord[2] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[3] == "X" && coord[4] == "X" && coord[5] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[6] == "X" && coord[7] == "X" && coord[8] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[0] == "X" && coord[3] == "X" && coord[6] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[1] == "X" && coord[4] == "X" && coord[7] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[2] == "X" && coord[5] == "X" && coord[8] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[0] == "X" && coord[4] == "X" && coord[8] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[2] == "X" && coord[4] == "X" && coord[6] == "X")
    {
        system("CLS");
        cout << "JOGADOR 1 VENCEU" << endl;
        jog1.vitoria++;
        jog2.derrota++;
        return true;
    }
    if(coord[0] == "O" && coord[1] == "O" && coord[2] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[3] == "O" && coord[4] == "O" && coord[5] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[6] == "O" && coord[7] == "O" && coord[8] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[0] == "O" && coord[3] == "O" && coord[6] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[1] == "O" && coord[4] == "O" && coord[7] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[2] == "O" && coord[5] == "O" && coord[8] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[0] == "O" && coord[4] == "O" && coord[8] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    if(coord[2] == "O" && coord[4] == "O" && coord[6] == "O")
    {
        system("CLS");
        cout << "JOGADOR 2 VENCEU" << endl;
        jog2.vitoria++;
        jog1.derrota++;
        return true;
    }
    for (int i = 0; i < 9; i++)
    {
        if(coord[i] != "+")
        { 
            local++;
        }
    }
    if (local == 9)
    {
        cout << "EMPATE" << endl;
        jog1.empate++;
        jog2.empate++;
        return true;
    }
    return false; // NENHUMA CONDIÇÃO ATENDIDA, JOGO AINDA EM ANDAMENTO
}
void Tabuleiro::zera()
{
    for(int i = 0; i < 9; i++)
    {
        coord[i] = "+";
    }
}