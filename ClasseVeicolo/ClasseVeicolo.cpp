#include<iostream>
#include<vector>
using namespace std;

class Veicolo{
    private:
    bool acceso;
    int marcia;
    int spazio_tot;
    vector<double> spazi;
    public:
    Veicolo(){
        acceso=false;
        marcia=0;
        spazio_tot=0;
    }
    void accendi(){
        acceso=true;
    }
    void seleziona_marcia(int marcia_selezionata){
        if(acceso==false){
            cout<<"Devi prima accendere il motore"<<endl;
        }else{
            if(marcia_selezionata<0 || marcia_selezionata>4){
                cout<<"Marcia non esistente"<<endl;
            }else{
                marcia=marcia_selezionata;
            }
        }
    }
    void avanza(double tempo){
        if(acceso==false){
            cout<<"Devi prima accendere il motore"<<endl;
        }else{
            if(marcia==0){
                cout<<"Il vettura e' in folle"<<endl;            
            }else{
                int spazio;
                switch(marcia){
                    case 1:
                    spazio=tempo*5.0;
                    spazi.push_back(spazio);
                    break;
                    case 2:
                    spazio=tempo*7.0;
                    spazi.push_back(spazio);
                    break;
                    case 3:
                    spazio=tempo*10.0;
                    spazi.push_back(spazio);
                    break;
                    case 4:
                    spazio=tempo*12.0;
                    spazi.push_back(spazio);
                    break;
                    default:
                    cout<<"Marcia non esistente";
                }
            }
        }
    }
    void spegni(){
        acceso=false;
        marcia=0;
    }
    double spazio_percorso(){
        if(acceso==false){
            spazi.clear();
            spazio_tot=0;
        }else{
            spazio_tot = 0;
            for(int i=0;i<spazi.size();i++){
                spazio_tot = spazio_tot + spazi[i];
                //Controllo gli elementi memorizzati nel vector per vedere se tiene traccia dei vari spazi percorsi
                cout<<spazi[i]<<" ";
            }
        }
        return spazio_tot;
    }
};

int main(){
    Veicolo v;
    double tempo;
    bool rimani=true;
    int operazione;
    int marcia_selez;
    cout<<"SIMULATORE VEICOLO"<<endl;
    cout<<"SELEZIONA L'OPZIONE DA ESEGUIRE"<<endl;
    while(rimani==true){
        cout<<"ACCENDI MOTORE (1), SELEZIONA MARCIA (2), AVANZA (3), SPEGNI MOTORE (4), SPAZIO PERCORSO (5), TERMINA (6) : ";
        cin>>operazione;
        switch(operazione){
            case 1:
            v.accendi();
            break;
            case 2:
            cout<<"Seleziona la marcia: ";
            cin>>marcia_selez;
            v.seleziona_marcia(marcia_selez);
            break;
            case 3:
            cout<<"Seleziona una durata di tempo da far percorre alla tua vettura: ";
            cin>>tempo;
            v.avanza(tempo);
            break;
            case 4:
            v.spegni();
            break;
            case 5:
            cout<<"Lo spazio percorso dalla vettura e' "<<v.spazio_percorso()<<" metri"<<endl;
            break;
            case 6:
            cout<<"Terminazione programma"<<endl;
            rimani=false;
            break;
            default:
            cout<<"Comando non valido"<<endl;
        }
    }
}
