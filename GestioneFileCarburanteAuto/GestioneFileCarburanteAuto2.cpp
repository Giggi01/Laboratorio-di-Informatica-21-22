#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    fstream f;
    f.open("FileCreati/Rifornimenti.txt",ios::in | ios::out);
    if (f.fail() == true)
    {
        cout << "Impossibile leggere il file" << endl;
    }
    else
    {
        vector<string> vdata;
        vector<double> vquantita;
        vector<double> vcosto;
        int a;
        bool b = false;
        bool c = true;

        double sommacosto = 0;
        double sommaquantita = 0;

        string date;
        double quanto, costo;

        while (b == false)
        {
            if (c==true)
            {
                while (f.eof() == false)
                {
                    f >> date >> quanto >> costo >> ws;
                    vdata.push_back(date);
                    vquantita.push_back(quanto);
                    vcosto.push_back(costo);
                }
                cout << "Lettura completata" << endl;
                c = false;
            }
            cout << "Seleziona l'operazione da voler eseguire" << endl;
            cout << "Inserisci un nuovo rifornimento(1), visualizza tutti i rifornimenti(2), costo totale e media della quantita di carburante(3), termina(4)" << endl;
            cin >> a;
            switch (a)
            {
            case 1:
                cout<<"Inserisci la nuova data nella forma gg//mm//aa ";
                cin>>date;
                cout<<"inserisci la nuova quantita di benzina ";
                cin>>quanto;
                cout<<"Inserisci il nuovo costo ";
                cin>>costo;
                f << date <<" "<<quanto<<" "<<costo<<endl;
                vdata.push_back(date);
                vquantita.push_back(quanto);
                vcosto.push_back(costo);
                cout<<"Scrittura completata"<<endl;
                c = true;
                break;
            case 2:
                cout << "I rifornimenti correnti sono: " << endl;
                for (int i = 0; i < vdata.size(); i++)
                {
                    cout << vdata[i] << " " << vquantita[i] << " " << vcosto[i] << endl;
                }
                break;
            case 3:
                sommacosto = 0;
                sommaquantita = 0;
                for (int i = 0; i < vcosto.size(); i++)
                {
                    sommacosto = sommacosto + vcosto[i];
                }
                for (int i = 0; i < vquantita.size(); i++)
                {
                    sommaquantita = sommaquantita + vquantita[i];
                }
                cout << "La somma totale dei costo ammonta a " << sommacosto << " euro, mentre la media del carburante equivale a " << sommaquantita / vquantita.size() << " litri" << endl;
                break;
            case 4:
                f.close();
                b = true;
                break;
            default:
                cout << "Operazione non trovata" << endl;
                break;
            }
        }
    }
}
