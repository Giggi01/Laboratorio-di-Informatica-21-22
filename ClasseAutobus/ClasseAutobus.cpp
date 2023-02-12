#include <iostream>
#include <set>
using namespace std;

class Autobus
{
private:
    set<string> nominativo;
    string localita;
    int num_passeggieri;

public:
    Autobus()
    {
        num_passeggieri = 0;
        localita = "Capolinea";
    }
    void muovi(string local)
    {
        localita = local;
    }
    void entra(string passeggiero)
    {
        nominativo.insert(passeggiero);
        num_passeggieri++;
    }
    void esci()
    {
        string nome;
        string cognome;
        if (num_passeggieri <= 0)
        {
            cout << "L'autobus e' vuoto" << endl;
        }
        else
        {
            cout<<"Inserisci il nome del passeggiero da far scendere: ";
            cin>>nome;
            cout<<"Inserisci il cognome del passeggiero da far scendere: ";
            cin>>cognome;
            nominativo.find(nome + " " + cognome);
            if (nominativo.find(nome + " " + cognome) == nominativo.end())
            {
                cout << "Non vi e' nessun passeggiero col tale nome" << endl;
            }
            else
            {
                nominativo.erase(nome + " " + cognome);
                num_passeggieri--;
            }
        }
    }
    void situazione()
    {
        cout << "Passeggieri a bordo: ";
        if (num_passeggieri == 0)
        {
            cout << "Vuoto";
        }
        else
        {
            for (string n : nominativo)
            {
                cout << n << " ";
            }
        }
        cout << endl;
        cout << "Fermata attuale: ";
        cout << localita << endl;
    }
    int numero_passeggieri()
    {
        return num_passeggieri;
    }
};

int main()
{
    Autobus a;
    string fermata;
    string nome;
    string cognome;
    bool rimani = true;
    int operazione;
    cout << "SIMULATORE AUTOBUS" << endl;
    cout << "Seleziona l'operazione da eseguire" << endl;
    while (rimani == true)
    {
        cout << "Muovi Autobus (1), Entra Passeggiero (2), Esci Passeggiero (3), Situazione Autobus (4), Numero Passeggieri Totali (5), Termina (6)" << endl;
        cin >> operazione;
        switch (operazione)
        {
        case 1:
            cout << "Digitare la fermata richiesta: ";
            cin >> fermata;
            a.muovi(fermata);
            break;
        case 2:
            cout << "Inserire il nome del passeggiero da far salire: ";
            cin >> nome;
            cout << "Inserire il cognome del passeggiero da far salire: ";
            cin >> cognome;
            a.entra(nome + " " + cognome);
            break;
        case 3:
            a.esci();
            break;
        case 4:
            a.situazione();
            break;
        case 5:
            cout << "Il numero dei passeggieri attuali nell'autobus sono: " << a.numero_passeggieri() << endl;
            break;
        case 6:
            rimani = false;
            break;
        default:
            cout << "Comando non valido" << endl;
            break;
        }
    }
}