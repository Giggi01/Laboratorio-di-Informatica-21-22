#include <iostream>
#include <random>
#include <iterator>
#include <algorithm>
using namespace std;

mt19937 gen;

struct Carta
{
    string seme;
    int numero;
};

int main()
{
    // vector<Carta> mano;
    int conta_mano[] = {1, 1, 1, 1, 1};
    vector<Carta> mazzo;
    string seme;
    Carta carta;
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            seme = "cuori";
            break;
        case 2:
            seme = "fiori";
            break;
        case 3:
            seme = "picche";
            break;
        case 4:
            seme = "quadri";
            break;
        }
        for (int j = 1; j <= 13; j++)
        {
            carta.seme = seme;
            carta.numero = j;
            mazzo.push_back(carta);
        }
    }

    int pescaggi;
    int tris = 0;
    int seed;
    cout << "inserisci un seed ";
    cin >> seed;
    gen.seed(seed);
    cout << "Quante volte vuoi pescare? " << endl;
    cin >> pescaggi;
    for (int i = 0; i < pescaggi; i++)
    {
        shuffle(mazzo.begin(), mazzo.end(), gen);
        for (int j = 0; j < 5; j++)
        {
            // uniform_int_distribution<int> dis(0, mazzo.size() - 1);
            // int indice = dis(gen);
            // auto inizio_mazzo = mazzo.begin();
            // advance(inizio_mazzo, indice);
            // carta = *inizio_mazzo;
            // mazzo.remove(carta);
            // mano.push_back(carta);
            if (j == 0)
            {
                cout << "{ ";
            }
            cout << mazzo[j].numero << " " << mazzo[j].seme;
            if (j == 4)
            {
                cout << " }" << endl;
            }
            else
            {
                cout << ", ";
            }

            for (int k = 0; k < j; k++)
            {
                if (mazzo[j].numero == mazzo[k].numero)
                {
                    conta_mano[j]++;
                    conta_mano[k]++;
                }
            }
        }
        for (int j = 0; j < 5; j++)
        {
            if (conta_mano[j] == 3)
            {
                tris++;
                cout << "TRIS" << endl;
                break;
            }
        }
        for (int j = 0; j < 5; j++) {
            conta_mano[j] = 1;
        }
    }
    cout << "Tris totali " << tris << endl;
    cout <<"La probabilita che esca un tris su "<<pescaggi<<" pescaggi e' pari a "<<double(tris)/double(pescaggi)<<endl;
}
