// DESENVOLVIDO POR ISAIAS ROBERTO DE LIMA E SILVA

#include <iostream>
#include <conio.h>
#include <string>
#include <locale>
#include "Jogador.h"
#include "Tabuleiro.h"
#include "Facil.h"
#include "Medio.h"
#include "Dificil.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Tabuleiro tab;
    Jogador *jog1 = new Jogador(1); // ATRIBUIÇÃO DAS VARIAVEIS - TIPO JOGADOR
    Jogador *jog2;
    bool in_game = true; // VARIVAEL DE CONTROLE CASO USUARIO DESEJAR JOGAR NOVAMENTE
    bool fim = false; // VARIAVEL DE CONTROLE PARA A RODADA EM ANDAMENTO
    bool continua_sem_troca = false; // CASO USUARIO NAO DESEJA MUDAR A "DIFICULDADE", APENAS INICIA UMA RODADA NOVA 
    int menu; 
    do
    {
        if (continua_sem_troca == false) // PRIMEIRA VEZ, OU USUARIO DESEJAR TROCAR A DIFICULDADE
        {
            do
            {
                cout << R"(BEM VINDO AO JOGO DA VELHA
    
    
    
    
                        SIGA AS INTRUCOES NO MENU:



1 - LEVEL FACIL

2 - LEVEL MEDIO

3 - LEVEL DIFICIL

4 - DOIS JOGADORES

5 - PARA SAIR



            )" << endl;
                cin >> menu;
                system("CLS");
            } while ((menu < 1) || (menu > 5)); //...Enquanto nao for as teclas

            switch (menu)
            {
            case 1:
                jog2 = new Facil(2); // SUBCLASSES DE JOGADOR
                break;
            case 2:
                jog2 = new Medio(2);
                break;
            case 3:
                jog2 = new Dificil(2);
                break;
            case 4:
                jog2 = new Jogador(2);
                break;
            default:
                return 0;
                break;
            }
            fim = false; // NECESSARIO PARA COMEÇAR NOVA RODADA
        }
        else
        {
            fim = false; // NECESSARIO PARA COMEÇAR NOVA RODADA, APENAS QUE NESSA CONDIÇÃO, A DIFICULDADE NAO FOI ALTERADA
        }
        while(fim == false)
        {
            system("CLS");
            cout << "VEZ JOGADOR 1" << endl << endl; 
            jog1->jogada(tab); // JOGADA DO PLAYER 1
            fim = tab.checa(*jog1, *jog2); // CHECAGEM PARA SABER SE ALGUEM GANHOU, OU ENTAO SE HOUVE EMPATE, RETORNA TRUE SE SIM
            if(fim == true) // SE FIM = TRUE, SIGNIFICA QUE ALGUEM GANHOU OU QUE HOUVE EMPATE, LOGO ENCERRA-SE A RODADA
            {
                break;
            }
            system("CLS");
            cout << "VEZ JOGADOR 2" << endl;
            jog2->jogada(tab); // JOGADA PLAYER 2 (PODE SER AUTOMATICA OU CASO SEJA OUTRO JOGADOR, FUNÇÃO VIRTUAL DE "JOGADOR É ACIONADA")
            fim = tab.checa(*jog1, *jog2); // NOVAMENTE CHECAGEM APÓS JOGADA PLAYER 2
        }
        system("Pause");
        jog1->info(); // STATUS DOS JOGADORES
        jog2->info();
        system("CLS");
        cout << "Deseja jogar novamente? 1 para sim e 2 para nao" << endl << endl;
        cin >> menu;
        if (menu == 1)
        {
            tab.zera(); // SE DESEJA JOGAR NOVAMENTE, ZERAR TABULEIRO
            cout << "Deseja mudar de jogador/ computador? 1 para sim e 2 para nao" << endl;
            cin >> menu;
            if (menu == 1)
            {
                continua_sem_troca = false;
                delete jog2; // CONTINUAR MAS TROCAR DIFICULDADE, EXCLUIR DADO ATUAL EVITANDO VAZAMENTO DE MEMORIA
            }
            else
            {
                continua_sem_troca = true;
            }
        }
        else
        {
            in_game = false;
        }

    } while (in_game == true);
    return 0;
}