#include<iostream>
using namespace std;

class Distributore_di_bevande{
    private:
    double cassa;
    double soldi_disponibili=0;
    public:
    Distributore_di_bevande(){
        cassa = 0;
    }
    void inserisci_moneta(int cent){
        if(cent == 1 || cent == 2 || cent == 5 || cent == 10 || cent == 20 || cent == 50){
            cassa = cassa + cent;
            soldi_disponibili = soldi_disponibili + cent;

        }else{
            cout<<"Importo della moneta inesistente"<<endl;
        }
    }
    void annulla(){
        cassa = cassa - soldi_disponibili;
        soldi_disponibili = 0;
    }
    void seleziona(int bevanda){
        switch(bevanda){
            case 1 :
            if(soldi_disponibili - 100 >= 0){
                cout<<"La bevanda e' stata consegnata"<<endl;
                double resto = soldi_disponibili - 100;
                cout<<"Il resto e' "<<resto<<" centesimi"<<endl;
                cassa = cassa - resto;
                soldi_disponibili = 0 + resto;
            }else{
                cout<<"L'importo non e' sufficente"<<endl;
            }
            break;
            case 2:
            if(soldi_disponibili - 120 >= 0){
                cout<<"La bevanda e' stata consegnata"<<endl;
                double resto = soldi_disponibili - 120;
                cout<<"Il resto e' "<<resto<<" centesimi"<<endl;
                cassa = cassa - resto;
                soldi_disponibili = 0 + resto;
            }else{
                cout<<"L'importo non e' sufficente"<<endl;
            }
            break;
            case 3 :
            if(soldi_disponibili - 90 >= 0){
                cout<<"La bevanda e' stata consegnata"<<endl;
                double resto = soldi_disponibili - 90;
                cout<<"Il resto e' "<<resto<<" centesimi"<<endl;
                cassa = cassa - resto;
                soldi_disponibili = 0 + resto;
            }else{
                cout<<"L'importo non e' sufficente"<<endl;
            }
            break;
            case 4 :
            if(soldi_disponibili - 70 >= 0){
                cout<<"La bevanda e' stata consegnata"<<endl;
                double resto = soldi_disponibili - 70;
                cout<<"Il resto e' "<<resto<<" centesimi"<<endl;
                cassa = cassa - resto;
                soldi_disponibili = 0 + resto;
            }else{
                cout<<"L'importo non e' sufficente"<<endl;
            }
            break;
            default:
            cout<<"Bevanda inesistente"<<endl;
        }
    }
    double _cassa(){
        double tot_cassa = cassa/100.0;
        return tot_cassa;
    }
    friend ostream& operator<< (ostream& os, const Distributore_di_bevande& distributore){
        os <<"La cassa tiene attualmente "<<distributore.cassa/100.0<<" euro"<<endl;
        os <<"Soldi disponibili: "<< distributore.soldi_disponibili/100.0<<" euro"<<endl;
        os <<"Le bibite disponibili con i relativi prezzi sono le seguenti: "<<endl;
        os <<"(1) Fanta, 1 euro"<<endl;
        os <<"(2) Sprite, 1.20 euro"<<endl;
        os <<"(3) Coca-Cola, 0.90 euro"<<endl;
        os <<"(4) Esta-The, 0.70 euro"<<endl;
        return os;
    }
};

int main(){
    int operazione;
    int bevanda;
    double centesimi;
    bool rimani = true;
    cout<<"SIMULATORE DI UN DISTRIBUTORE DI BEVANDE"<<endl;
    Distributore_di_bevande distributore;
    cout<<distributore;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"Inserisci moneta (1), Annulla (2), Seleziona Bevanda (3), Totale cassa (4), Visualizza distributore (5), Termina (6): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Inserisci una moneta da c centesimi: "<<endl;
            cin>>centesimi;
            distributore.inserisci_moneta(centesimi);
            break;
            case 2 :
            distributore.annulla();
            break;
            case 3 :
            cout<<"Seleziona il numero della bevanda che preferisci prelevare: ";
            cin>>bevanda;
            distributore.seleziona(bevanda);
            break;
            case 4 : 
            cout<<"Il totale della cassa ammonta a "<<distributore._cassa()<<" euro"<<endl;
            break;
            case 5 :
            cout<<distributore;
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}