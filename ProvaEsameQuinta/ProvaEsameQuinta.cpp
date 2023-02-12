#include<iostream>
#include<cctype>
#include<vector>
using namespace std;

class Memoria{
    private:
    vector<string> memoria;
    public:
    Memoria(){
        memoria.clear();
    }
    void inserisci(string stringa){
        memoria.push_back(stringa);
    }
    friend ostream& operator <<(ostream& os, const Memoria& memory){
        os << "La memoria contiene i seguenti dati: "<<endl;
        for(int i =0 ; i < memory.memoria.size(); i ++){
            os <<"- "<< memory.memoria[i]<<endl;
        }
        return os;
    }
    void visualizzaR(){
        cout<<"Dati in memoria in senso inverso: "<<endl;
        for(int i = memoria.size()-1; i >= 0; i--){
            cout<<"- "<<memoria[i]<<endl;
        }
    }
    int conta(char iniziale){
        int _conta = 0;
        for(int i =0 ; i < memoria.size(); i++){
            if(toupper(memoria[i][0]) == toupper(iniziale)){
                _conta ++;
            }
        }
        return _conta;
    }
    void azzera(){
        memoria.clear();
    }
};

int main(){
    bool rimani = true;
    int opzione;
    string memoria;
    char  carattere;
    Memoria memory;
    cout<<"SIMULATORE DI UNA MEMORIA"<<endl;
    cout<<"Seleziona l'opzione che vuoi eseguire"<<endl;
    while(rimani == true){
        cout<<"AGGIUNGI STRINGA IN MEMORIA (1), VISUALIZZA LA MEMORIA (2), VISUALIZZA LA MEMORIA IN SENSO INVERSO (3), CONTA (4), AZZERA MEMORIA (5), TERMINA (6): ";
        cin>>opzione;
        switch(opzione){
            case 1 :
            cout<<"Inserisci il dato che vuoi aggiungere alla memoria: ";
            cin>>memoria;
            memory.inserisci(memoria);
            break;
            case 2 :
            cout << memory;
            break;
            case 3 :
            memory.visualizzaR();
            break;
            case 4 :
            cout<<"Inserisci il carattere che vuoi analizzare: ";
            cin>>carattere;
            cout<<"I dati che iniziano per "<<carattere<<" sono "<<memory.conta(carattere)<<endl;
            break;
            case 5 :
            memory.azzera();
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}