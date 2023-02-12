#include<iostream>
#include<vector>
using namespace std;

class Studente{
    private:
    string nome, cognome, corso_di_laurea;
    vector<string> materie;
    vector<double> voti;
    public:
    Studente(string _nome, string _cognome, string _corso_di_laurea){
        nome = _nome;
        cognome = _cognome;
        corso_di_laurea = _corso_di_laurea;
    }
    void sostieni_esame(string materia, double voto){
        materie.push_back(materia);
        voti.push_back(voto);
    }
    double media(){
        double media = 0;
        for(int i =0 ; i < voti.size(); i ++){
            media = media + voti[i];
        }
        return media/voti.size();
    }
    void certificato(){
        cout<<"Dati dello studente: "<<endl;
        cout<<nome<<endl;
        cout<<cognome<<endl;
        cout<<corso_di_laurea<<endl;
        cout<<"Esami sostenuti: "<<endl;
        for(int i =0 ; i < voti.size(); i ++){
            cout<<"- "<<materie[i]<<" Voto: "<<voti[i]<<endl;
        }
    }
    int sostenuto(string materia){
        int _sostenuto = -1;
        int conta = 0;
        for(int i = 0 ; i < materie.size(); i ++){
            conta ++;
            if(materie[i] == materia){
                _sostenuto = voti[conta];
            }
        }
        return _sostenuto;
    }
};

int main(){
    bool rimani = true;
    int operazione;
    double voto;
    string nome, cognome, corso_di_laurea, esame_sostenuto;
    cout<<"Inserisci le tue credenziali"<<endl;
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Cognome: ";
    cin>>cognome;
    cout<<"Corso di laurea: ";
    cin>>corso_di_laurea;
    Studente student(nome, cognome, corso_di_laurea);
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"SOSTIENI ESAME (1), MEDIA VOTI (2), CERTIFICATO (3), CERCA ESAME (4), TERMINA (5): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Inserisci il nome dell'esame sostenuto: ";
            cin>>esame_sostenuto;
            cout<<"Inserisci il voto dell'esame sostenuto: ";
            cin>>voto;
            student.sostieni_esame(esame_sostenuto, voto);
            break;
            case 2 :
            cout<<"La media dei voti e' : "<<student.media()<<endl;
            break;
            case 3 :
            student.certificato();
            break;
            case 4 :
            cout<<"Inserisci il nome dell'esame che stai cercando: ";
            cin>>esame_sostenuto;
            if(student.sostenuto(esame_sostenuto) == -1){
                cout<<"Non esiste alcun esame sostenuto con tale nome"<<endl;
            }else{
                cout<<"Hai sostenuto l'esame di "<<esame_sostenuto<<" ed hai ottenuto "<<student.sostenuto(esame_sostenuto)<<endl;
            }
            break;
            case 5 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}