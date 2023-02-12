#include <iostream>
#include <ctime>
using namespace std;

class Cronometro
{
private:
    int time_start;
    int time_end;
    bool started;

public:
    Cronometro()
    {
        time_start = time(0);
        time_end = time(0);
        started = false;
    }

    void Avvia()
    {
        if (started)
        {
            cout << "Errore" << endl;
            return;
        }
        time_start = time(0);
        time_end = time(0);
        started = true;
    }

    void Ferma()
    {
        if (!started)
        {
            cout << "Errore" << endl;
            return;
        }
        time_end = time(0);
        started = false;
    }

    int Visualizza()
    {
        if (started)
        {
            time_end = time(0);
        }
        return time_end - time_start;
    }

    void Azzera()
    {
        time_start = time_end;
    }
};

int main()
{
    Cronometro c;
    int operazione;
    bool rimani = true;
    cout << "CRONOMETRO" << endl;
    cout << "Seleziona l'operazione da eseguire " << endl;
    while (rimani)
    {
        cout << "Avvia (1), Ferma(2), Visualizza (3), Azzera(4), Esci(5) : ";
        cin >> operazione;
        switch (operazione)
        {
        case 1:
            c.Avvia();
            break;
        case 2:
            c.Ferma();
            break;
        case 3:
            cout << "Tempo trascorso : " << c.Visualizza() << endl;
            break;
        case 4:
            c.Azzera();
            break;
        case 5:
            rimani = false;
            break;
        default:
            cout << "Comando non valido" << endl;
        }
    }
}
