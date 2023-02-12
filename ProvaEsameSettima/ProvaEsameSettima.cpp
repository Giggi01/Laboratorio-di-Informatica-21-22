#include<iostream>
#include<vector>
#include<sstream>
#include<cctype>
using namespace std;

struct Contatto{
    private:
    string nome;
    string cognome;
    int telefono;
    public:
    Contatto(string _nome, string _cognome, int _telefono){
        nome = _nome;
        cognome = _cognome;
        telefono = _telefono;
    }
    int Sei_tu(string _nome, string _cognome){
        if(nome == _nome && cognome == _cognome){
            return telefono;
        }
        return -1;
    }
    bool iniziale_cognome(char iniziale){
        return toupper(cognome[0]) == toupper(iniziale);
    }
    friend ostream& operator << (ostream& os, const Contatto& contatto){
        os << "- "<<contatto.nome<<" "<<contatto.cognome<<" Numero di cellulare: "<<contatto.telefono<<endl;
        return os;
    }
};

class Rubrica_telefonica{
    private:
    vector<Contatto> _contatti;
    //vector<string> cognome;
    //vector<string> telefono;
    public:
    Rubrica_telefonica(){
        _contatti.clear();
    }
    void inserisci(string _nome, string _cognome, string _telefono){
        Contatto c(_nome, _cognome, stoi(_telefono));
        _contatti.push_back(c);
    }
    string cerca(string _nome, string _cognome){
        int numero;
        for(int i =0 ; i < _contatti.size(); i++){
            numero = _contatti[i].Sei_tu(_nome, _cognome);
            if(numero != -1) {
                break;
            }
        }
        if(numero == -1) {
            return "Persona inesistente";
        }
        return to_string(numero);
    }
    int cognomi(char iniziale){
        int conta = 0 ;
        for(int i = 0 ; i < _contatti.size(); i ++){
            if(_contatti[i].iniziale_cognome(iniziale)){
                conta ++;
            }
        }
        return conta;
    }
    void elimina(string _nome, string _cognome){
        for(int i = 0 ; i < _contatti.size() ; i ++ ){
            if(_contatti[i].Sei_tu(_nome, _cognome) != -1){
                _contatti.erase(_contatti.begin() + i);
                return;
            }
        }
        cout<<"Il contatto non esiste"<<endl;
    }
    friend ostream& operator << (ostream& os, const Rubrica_telefonica& rubrica){
        os << "Ecco i contatti salvati in rubrica: "<<endl;
        for(int i =0 ; i < rubrica._contatti.size(); i++){
            os <<rubrica._contatti[i];
        }
        return os;
    }
};

int main(){
    bool rimani = true;
    int operazione;
    string _nome;
    string _cognome;
    string _telefono;
    char iniziale;
    Rubrica_telefonica rubrica;
    cout<<"SIMULATORE RUBRICA"<<endl;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"AGGIUNGI CONTATTO (1), CERCA CONTATTO (2), COGNOMI (3), ELIMINA CONTATTO (4), VISULIZZA RUBRICA (5), TERMINA (6): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Crea il contato da aggiungere"<<endl;
            cout<<"Nome: ";
            cin>>_nome;
            cout<<"Cognome: ";
            cin>>_cognome;
            cout<<"Numero di telefono: ";
            cin>>_telefono;
            rubrica.inserisci(_nome, _cognome, _telefono);
            break;
            case 2 :
            cout<<"Inserisci nome e cognome del contatto da cercare: ";
            cin>>_nome;
            cin>>_cognome;
            cout<<rubrica.cerca(_nome, _cognome)<<endl;
            break;
            case 3 :
            cout<<"Inserisci il carattere che vuoi analizzare: ";
            cin>>iniziale;
            cout<<"I cognomi in rubrica che iniziano per "<<iniziale<<" sono "<<rubrica.cognomi(iniziale)<<endl;
            break;
            case 4 :
            cout<<"Inserisci nome e cognome del contatto da eliminare: ";
            cin>>_nome;
            cin>>_cognome;
            rubrica.elimina(_nome, _cognome);
            break;
            case 5 :
            cout<<rubrica;
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}