#include <iostream>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Bem vindos ao jogo da adivinhação! *" << endl;
    cout << "**************************************" << endl;

    const int SECRET = 5;
    bool error = true;
    int attemps = 0;
    double points = 1000.0;

    while (error)
    {
        attemps++;
        int shot;

        cout << "Tentativa nº " << attemps << endl;
        cout << "Qual seu chute? ";
        cin >> shot;

        double lost_points = abs(shot - SECRET) / 2.0;
        points = points - lost_points;

        bool win = shot == SECRET;
        bool small = shot < SECRET;

        if (win)
        {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            error = false;
        }
        else if (small)
        {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    cout << "Você acertou na " << attemps << "º tentativa" << endl;
    cout << "Sua pontuação foi de " << points << " pontos." << endl;
}