#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Cariche{
    private:
    vector<double> coordinata_x;
    vector<double> coordinata_y;
    vector<double> coordinata_z;
    vector<double> carica_q;
    public:
    Cariche(){
        coordinata_x.clear();
        coordinata_y.clear(),
        coordinata_z.clear();
        carica_q.clear();
    }
    void aggiungi_carica(double _coordinata_x, double _coordinata_y, double _coordinata_z, double _carica_q){
        coordinata_x.push_back(_coordinata_x);
        coordinata_y.push_back(_coordinata_y);
        coordinata_z.push_back(_coordinata_z);
        carica_q.push_back(_carica_q);
    }
    friend ostream& operator << (ostream& os, const Cariche& carica){
        os << "Elenco delle cariche con le rispettive posizioni: "<<endl;
        for(int i = 0 ; i < carica.carica_q.size(); i ++){
            os << "- Carica: "<<carica.carica_q[i]<<" Ohm"<<" "<<"Posizione X: "<<carica.coordinata_x[i]<<", Y: "<<carica.coordinata_y[i]<<", Z: "<<carica.coordinata_z[i]<<endl;
        }
        return os;
    }
    bool esiste(double _carica_q){
        bool exist = false;
        for(int i = 0 ; i < carica_q.size();i ++){
            if(carica_q[i] >= _carica_q){
                exist = true;
            }
        }
        return exist;
    }
    void moltiplica (double k){
        for(int i = 0 ; i < carica_q.size(); i ++){
            carica_q[i] = carica_q[i] * k;
        }
    }
    void carica_piu_vicina(double x, double y, double z);
};

void Cariche :: carica_piu_vicina(double x, double y, double z){
    double distanza ;
    double carica_vicina;
    vector<double> distanze;
    double distanza_minima= 1.79769313486231570*pow(10,308); //Massimo valore per un tipo double
    for(int i = 0 ; i < carica_q.size(); i ++){
        distanza = sqrt(pow(abs(x - coordinata_x[i]), 2) + pow(abs(y - coordinata_x[i]), 2) + pow(abs(z - coordinata_z[i]), 2));
        distanze.push_back(distanza);
        if(distanze[i] < distanza_minima){
            distanza_minima = distanze[i];
            carica_vicina = carica_q[i];
        }     
    }
    cout << "La carica piu vicina alle coordinate inserite e' la carica di valore : "<<carica_vicina<<endl;
}

int main(){
    bool rimani = true;
    int operazione;
    double x, y , z;
    double _carica;
    double scalare;
    Cariche carica;
    cout<<"SIMULATORE DI CARICHE IN UN CAMPO"<<endl;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"AGGIUNGI CARICA (1), VISUALIZZA ELENCO CARICHE (2), CERCA CARICHA (3), MOLTIPLICA PER UNO SCALARE (4), CARICA PIU VICINA (5), TERMINA (6): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Crea la carica da aggiungere"<<endl;
            cout<<"Carica: ";
            cin>>_carica;
            cout<<"Coordinata X: ";
            cin>>x;
            cout<<"Coordainata Y: ";
            cin>>y;
            cout<<"Coordinata Z: ",
            cin>>z;
            carica.aggiungi_carica(x, y, z, _carica);
            break;
            case 2 :
            cout << carica;
            break;
            case 3 :
            cout<<"Inserisci il carica che vuoi cercare nell'elenco: ";
            cin>>_carica;
            if(carica.esiste(_carica) == true){
                cout<<"La carica si trova nell'elenco"<<endl;
            }else{
                cout<<"La carica non si trova nell'elenco"<<endl;
            }
            break;
            case 4 :
            cout<<"Inserisci lo scalare da moltiplicare con le altre cariche: ";
            cin>>scalare;
            carica.moltiplica(scalare);
            break;
            case 5 :
            cout<<"Inserisci le coordinate"<<endl;
            cout<<"Coordinata X: ";
            cin>>x;
            cout<<"Coordainata Y: ";
            cin>>y;
            cout<<"Coordinata Z: ",
            cin>>z;
            carica.carica_piu_vicina(x, y, z);
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}