#include<iostream>
using namespace std;

class frazione{
    int numeratore, denominatore;
    public:
    frazione(int& num, int& den){
        numeratore = num;
        denominatore = den;
    }
    frazione(int& _num){
        numeratore = _num;
        denominatore = 1;
    }
    frazione(){
        numeratore = 0;
        denominatore = 1;
    }
    void visualizza(){
        cout<<"La frazione e': ";
        cout<<numeratore<<"/"<<denominatore<<endl;
    }
    void semplificati(){
        int MCD;
        int a = numeratore;
        int b = denominatore;
        if(b<a){
            while(b!=0){
                int resto = a % b;
                a = b;
                MCD = a;
                b = resto;
            }
        }else{
            if(a==b || b==a){
                MCD=a;
            }else{
                while(a!=0){
                    int resto = b % a;
                    b = a;
                    MCD = b;
                    a = resto;
                }
            }

        }
        numeratore = numeratore / MCD;
        denominatore = denominatore / MCD;
    }
    static frazione somma ( const frazione &f1, const frazione &f2 );
    static frazione sottrazione ( const frazione &f1, const frazione &f2 );
    static frazione moltiplicazione ( const frazione &f1, const frazione &f2 );
    static frazione divisione  ( const frazione &f1, const frazione &f2 );;
};

frazione frazione :: somma ( const frazione &f1, const frazione &f2 ){
    frazione _somma;
    if(f1.denominatore == f2.denominatore || f2.denominatore == f1.denominatore ){
        _somma.denominatore = f1.denominatore;
        _somma.numeratore = f1.numeratore + f2.numeratore;
    }else{
        _somma.denominatore = f1.denominatore * f2.denominatore;
        _somma.numeratore = ((_somma.denominatore/f1.denominatore)*f1.numeratore)+((_somma.denominatore/f2.denominatore)*f2.numeratore);
    }
    return _somma;
}

frazione frazione :: sottrazione ( const frazione &f1, const frazione &f2 ){
    frazione _sottrazione;
    if(f1.denominatore == f2.denominatore || f2.denominatore == f1.denominatore){
        _sottrazione.denominatore = f1.denominatore;
        _sottrazione.numeratore = f1.numeratore - f2.numeratore;
    }else{
        _sottrazione.denominatore = f1.denominatore * f2.denominatore;
        _sottrazione.numeratore = ((_sottrazione.denominatore/f1.denominatore)*f1.numeratore)-((_sottrazione.denominatore/f2.denominatore)*f2.numeratore);
    }
    return _sottrazione;
}

frazione frazione :: moltiplicazione ( const frazione &f1, const frazione &f2 ){
    frazione _moltiplicazione;
    _moltiplicazione.numeratore = f1.numeratore * f2.numeratore;
    _moltiplicazione.denominatore = f1.denominatore * f2.denominatore;
    return _moltiplicazione;
}

frazione frazione :: divisione ( const frazione &f1, const frazione &f2 ){
    frazione _divisione;
    _divisione.numeratore = f1.numeratore * f2.denominatore;
    _divisione.denominatore= f2.denominatore * f2.numeratore;
    return _divisione;
}

int main(){
    bool rimani = true;
    string risposta;
    string scelta_semplifica;
    int num;
    int den;
    int numer;
    int denom;
    int operazione;
    frazione fraz_somma;
    frazione fraz_molt;
    cout<<"CALCOLATRICE FRAZIONI"<<endl;
    while (rimani == true){
        bool rimani2=true;
        cout<<"Creazione della prima frazione"<<endl;
        cout<<"Numeratore: ";
        cin>>num;
        cout<<"Denominatore: ";
        cin>>den;
        frazione frac_1(num, den);
        cout<<"Creazione della seconda frazione"<<endl;
        cout<<"Numeratore: ";
        cin>>num;
        cout<<"Denominatore: ";
        cin>>den;
        frazione frac_2(num, den);
        cout<<"Selezionare l'operazione da voler svolgere"<<endl;
        while (rimani2 == true){
            cout<<"Visualizza (1), Semplifica (2), Somma (3), Sottrazione (4), Moltiplicazione (5), Divisione (6), Termina(7): ";
            cin>>operazione;
            bool rimani_4 = true;
            switch(operazione){
                case 1 :
                frac_1.visualizza();
                frac_2.visualizza();
                break;
                case 2 :
                frac_1.semplificati();
                frac_2.semplificati();
                break;
                case 3 :
                //cout<<"Definisci l'altra frazione"<<endl;
                //cout<<"Numeratore: ";
                //cin>>numer;
                //cout<<"Denominatore: ";
                //cin>>denom;
                //frazione frac_2(numer, denom);
                fraz_somma = frazione :: somma(frac_1, frac_2);
                fraz_somma.visualizza();
                while(rimani_4 == true){
                    cout<<"Vuoi semplificare la frazione (Yes=Semplifica), (No=Non semplifica) : ";
                    cin>>scelta_semplifica;
                    if(scelta_semplifica == "Yes"){
                        fraz_somma.semplificati();
                        fraz_somma.visualizza();
                        rimani_4 = false;
                    }else{
                        if(scelta_semplifica == "No"){
                            rimani_4 = false;
                            break;
                        }else{
                            cout<<"Comando non valido"<<endl;
                        }
                    }
                }
                break;
                case 4 : 
                //cout<<"Definisci l'altra frazione"<<endl;
                //cout<<"Numeratore: ";
                //cin>>numer;
                //cout<<"Denominatore: ";
                //cin>>denom;
                //frac_2(numer, denom);
                fraz_somma = frazione :: sottrazione(frac_1, frac_2);
                fraz_somma.visualizza();
                while(rimani_4 == true){
                    cout<<"Vuoi semplificare la frazione (Yes=Semplifica), (No=Non semplifica) : ";
                    cin>>scelta_semplifica;
                    if(scelta_semplifica == "Yes"){
                        fraz_somma.semplificati();
                        fraz_somma.visualizza();
                        rimani_4 = false;
                    }else{
                        if(scelta_semplifica == "No"){
                            rimani_4 = false;
                            break;
                        }else{
                            cout<<"Comando non valido"<<endl;
                        }
                    }
                }
                break;
                case 5 :
                //cout<<"Definisci l'altra frazione"<<endl;
                //cout<<"Numeratore: ";
                //cin>>numer;
                //cout<<"Denominatore: ";
                //cin>>denom;
                //frac_2(numer, denom);
                fraz_molt = frazione :: moltiplicazione(frac_1, frac_2);
                fraz_molt.visualizza();
                while(rimani_4 == true){
                    cout<<"Vuoi semplificare la frazione (Yes=Semplifica), (No=Non semplifica) : ";
                    cin>>scelta_semplifica;
                    if(scelta_semplifica == "Yes"){
                        fraz_molt.semplificati();
                        fraz_molt.visualizza();
                        rimani_4 = false;
                    }else{
                        if(scelta_semplifica == "No"){
                            rimani_4 = false;
                            break;
                        }else{
                            cout<<"Comando non valido"<<endl;
                        }
                    }
                }
                break;
                case 6 :
                //cout<<"Definisci l'altra frazione"<<endl;
                //cout<<"Numeratore: ";
                //cin>>numer;
                //cout<<"Denominatore: ";
                //cin>>denom;
                //frac_2(numer, denom);
                fraz_molt = frazione :: divisione(frac_1, frac_2);
                fraz_molt.visualizza();
                  while(rimani_4 == true){
                    cout<<"Vuoi semplificare la frazione (Yes=Semplifica), (No=Non semplifica) : ";
                    cin>>scelta_semplifica;
                    if(scelta_semplifica == "Yes"){
                        fraz_molt.semplificati();
                        fraz_molt.visualizza();
                        rimani_4 = false;
                    }else{
                        if(scelta_semplifica == "No"){
                            rimani_4 = false;
                            break;
                        }else{
                            cout<<"Comando non valido"<<endl;
                        }
                    }
                }
                break;
                case 7 :
                rimani2=false;
                break;
                default:
                cout<<"Comando non valido"<<endl;
            }
        }
        bool rimani3 = true;
        while(rimani3==true){
            cout<<"Vuoi terminare il programma?"<<endl;
            cout<<"Digita Yes per terminare , No per proseguire"<<endl;
            cin>>risposta;
            if(risposta=="Yes"){
                rimani=false;
                rimani3=false;
            }else{
                if(risposta=="No"){
                rimani=true;   
                rimani3=false;
                }else{
                    cout<<"Comando non valido"<<endl;
                }
            }
        }
    }
}