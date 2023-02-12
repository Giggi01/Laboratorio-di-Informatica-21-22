#include<iostream>
#include<vector>
using namespace std;

struct Lezione{
    int giorno;
    string mese, argomento;
    double  ora_inizio, ora_fine;
    public:
    Lezione(int _giorno, string _mese, double _ora_inizio, double _ora_fine, string _argomento){
        giorno = _giorno;
        mese = _mese;
        ora_inizio = _ora_inizio;
        ora_fine = _ora_fine;
        argomento = _argomento; 
    }
    friend ostream& operator << (ostream& os, const Lezione& lezione){
        os << "- "<<lezione.giorno<<" "<<lezione.mese<<" "<<lezione.argomento<<" "<<lezione.ora_inizio<<" "<<lezione.ora_fine<<endl; 
        return os;
    }
    double numero_ora_lezione(){
        double numero_ora = ora_fine - ora_inizio;
        return numero_ora;
    }
};

class Diario{
    private:
    vector<Lezione> lezioni;
    public:
    Diario(){
        lezioni.clear();
    }
    friend ostream& operator << (ostream& os, const Diario& diario){
        cout<<"Ecco il tuo diario delle lezioni: "<<endl;
        for (int i =0 ; i < diario.lezioni.size(); i ++){
            os << diario.lezioni[i] ;
        }
        return os;
    }
    void inserisci_lezione(int _giorno,string _mese,double _ora_inizio,double _ora_fine, string _argomento){
        Lezione lection(_giorno, _mese, _ora_inizio, _ora_fine, _argomento);
        lezioni.push_back(lection);
    }
    double numero_ore_svolte(){
        double numero_ore = 0;
        for(int i = 0 ; i < lezioni.size(); i ++){
            numero_ore = numero_ore + lezioni[i].numero_ora_lezione();
        }
        return numero_ore;
    }
    int numero_giorni_impegnati(){
        int numero_giorni = 0;
        for( int i = 0 ; i < lezioni.size(); i ++){
            if ( lezioni[i].giorno != lezioni[i+1].giorno){
                numero_giorni ++;
            }
        }
        return numero_giorni;
    }
};

int main(){
    bool rimani = true;
    int operazione;
    int giorno;
    string mese, argomento;
    double ora_inizio, ora_fine;
    Diario diario;
    cout<<"SIMULATORE DI UN DIARIO"<<endl;
    cout<<"Seleziona un operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"VISUALIZZA IL DIARIO (1), INSERISCI LEZIONE (2), NUMERO DI ORE SVOLTE (3), GIORNI SVOLTI (4), TERMINA (5): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<diario;
            break;
            case 2 :
            cout<<"Inserisci una lezione al tuo diario"<<endl;
            cout<<"Giorno : ";
            cin>>giorno;
            cout<<"Mese: ";
            cin>>mese;
            cout<<"Argomento: ";
            cin>>argomento;
            cout<<"Ora di inizio: ";
            cin>>ora_inizio;
            cout<<"Ora di fine: ";
            cin>>ora_fine;
            diario.inserisci_lezione(giorno, mese, ora_inizio, ora_fine, argomento);
            break;
            case 3 :
            cout<<"Il numero di ore svolte equivale a : "<<diario.numero_ore_svolte()<<" ore"<<endl;
            break;
            case 4 :
            cout<<"I giorni svolti sono : "<<diario.numero_giorni_impegnati()<<endl;
            break;
            case 5 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}