#include<iostream>
#include<vector>
using namespace std;

class Esperimento{
    private:
    string _nome_exp;
    vector<double> misurazioni;
    public:
    Esperimento(string nome_exp){
        _nome_exp=nome_exp;
        misurazioni.clear();
    }
    void aggiungi_misurazione(double exp){
        misurazioni.push_back(exp);
    }
    void visualizza(){
        cout<<_nome_exp<<endl;
        cout<<"Misurazioni effettuate: "<<endl;
        for(int i=0;i<misurazioni.size()-1;i++){
            cout<<misurazioni[i]<<", ";
        }
        cout<<misurazioni[misurazioni.size()-1];
        cout<<endl;
    }
    void media(){
        double somma=0.0;
        double media;
        for(int i=0;i<misurazioni.size();i++){
            somma=somma+misurazioni[i];
        }
        media=somma/misurazioni.size();
        cout<<"La media delle misurazioni dell'esperimento "<<_nome_exp<<" e': "<<media<<endl;
    }
    void massimo(){
        double massimo=-2147483648.0;
        for(int i=0;i<misurazioni.size();i++){
            if(misurazioni[i]>massimo){
                massimo=misurazioni[i];
            }
        }
        cout<<"Il valore massimo ottenuto dall'esperimento "<<_nome_exp<<" e': "<<massimo<<endl;
    }
};

int main(){
    string nome_exp;
    int operazione;
    bool rimani=true;
    cout<<"Scrivi il nome dell'esperimento: ";
    cin>>nome_exp;
    Esperimento exp(nome_exp);
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani==true){
        cout<<"Aggiungi misurazioni (1), Visualizza esperimento (2), Media Misurazioni (3), Massima Misurazione (4), Termina (5): ";
        bool esci = false;
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Per terminare digiti 0"<<endl;
            while(esci==false){
                double misurazione;
                cout<<"Inserisci la misurazione: ";
                cin>>misurazione;
                if(misurazione==0){
                    esci=true;
                    break;
                }else{
                exp.aggiungi_misurazione(misurazione);
                }
            }
            break;
            case 2 :
            exp.visualizza();
            break;
            case 3 :
            exp.media();
            break;
            case 4 :
            exp.massimo();
            break;
            case 5 :
            rimani=false;
            break;
            default:
            cout<<"Comando non valido"<<endl;
        }
    }
}