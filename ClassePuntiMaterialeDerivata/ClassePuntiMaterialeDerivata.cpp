#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//Caso bidimensionale 

class Punto{
    public:
    double massa;
    double posizione_x;
    double posizione_y;
    double velocita_x;
    double velocita_y;
    public:
    Punto(double _massa, double _posizione_x, double _posizione_y, double _velocita_x, double _velocita_y){
        massa = _massa;
        posizione_x = _posizione_x;
        posizione_y = _posizione_y;
        velocita_x = _velocita_x;
        velocita_y = _velocita_y;
    }
    Punto(double _massa){
        massa = _massa;
        posizione_x = 0;
        posizione_x = 0;
        velocita_x = 0;
        velocita_y = 0;
    }
    void cambia_velocita(double _velocita_x, double _velocita_y){
        velocita_x = _velocita_x;
        velocita_y = _velocita_y;
    }
    void muovi(double tempo){
        posizione_x = posizione_x + tempo*velocita_x;
        posizione_y = posizione_y +tempo*velocita_y;
    }
    double energia_cinetica(){
        double modulo_velocita = sqrt(pow(velocita_x,2)+pow(velocita_y,2));
        double en_cin = 0.5*massa*modulo_velocita;
        return en_cin;
    }
    double quantita_di_moto(){
        double modulo_velocita = sqrt(pow(velocita_x,2)+pow(velocita_y,2));
        double quan_di_moto = massa * modulo_velocita;
        return quan_di_moto;
    }
    void visualizza(){
        cout<<"CARATTERISTICHE DEL PUNTO MATERIALE"<<endl;
        cout<<"MASSA: "<<massa<<" KG"<<endl;
        cout<<"POSIZIONE ASCISSE: "<<posizione_x<<" METRI "<<endl;
        cout<<"POSIZIONE COORDINATE: "<<posizione_y<<" METRI "<<endl;
        double posizione_totale = sqrt(pow(posizione_x,2)+pow(posizione_y,2));
        cout<<"DISTANZA RISPETTO ALL'ORIGINE: "<<posizione_totale<<" METRI "<<endl;
        double modulo_velocita = sqrt(pow(velocita_x,2)+pow(velocita_y,2));
        cout<<"VELOCITA ATTUALE: "<<modulo_velocita<<" M/S"<<endl;       
    }
};

class InsiemePunti{
    vector<Punto> lista_punti;
    public:
    InsiemePunti(){
        lista_punti.clear();
    }
    void aggiungi_punto(Punto punto){
        lista_punti.push_back(punto);
    }
    void visualizza(){
        cout<<"I punti sono i seguenti: "<<endl;
        for(int i=0; i<lista_punti.size();i++){
            cout<<"- "<<lista_punti[i].massa<<" kg, "<<"Posizione sulle x: "<<lista_punti[i].posizione_x<<" m, "<<"Posizione sulle y: "<<lista_punti[i].posizione_y<<" m, "<<"Componente x della velocita: "<<lista_punti[i].velocita_x<<" m/s, "<<"Componente y della velocita: "<<lista_punti[i].velocita_y<<" m/s"<<endl;
        }
    } 
    void muovi(int tempo){
        for(int i = 0; i < lista_punti.size(); i++){
            lista_punti[i].posizione_x = lista_punti[i].posizione_x + tempo*lista_punti[i].velocita_x;
            lista_punti[i].posizione_y = lista_punti[i].posizione_y + tempo*lista_punti[i].velocita_y;
        }
    }
    double energia_cinetica(){
        double en_cin_tot=0;
        for(int i = 0; i < lista_punti.size();i++){
            en_cin_tot = en_cin_tot + (0.5 * lista_punti[i].massa * sqrt(pow(lista_punti[i].velocita_x,2)+pow(lista_punti[i].velocita_y,2)));
        }
        return en_cin_tot;
    }
    double quantita_moto(){
        double quant_mot_tot = 0;
        for(int i = 0;i < lista_punti.size(); i ++){
            quant_mot_tot = quant_mot_tot + (lista_punti[i].massa * sqrt(pow(lista_punti[i].velocita_x,2)+pow(lista_punti[i].velocita_y,2)));
        }
        return quant_mot_tot;
    }
};

int main(){
    InsiemePunti ins_punti;
    int operazione;
    double massa;
    double posizione_x;
    double posizione_y;
    double velocita_x;
    double velocita_y;
    bool rimani = true;
    string risposta;
    cout<<"Simulatore lista di punti"<<endl;
    while (rimani == true){
        bool rimani2 = true;
        cout<<"Creazione del punto"<<endl;
        cout<<"Massa : " ;
        cin>>massa;
        cout<<"Posizione sulle x : ";
        cin>>posizione_x;
        cout<<"Posizione sulle y : ";
        cin>>posizione_y;
        cout<<"Velocita sulle x : ";
        cin>>velocita_x;
        cout<<"Velocita sulle y : ";
        cin>>velocita_y;
        Punto punto(massa, posizione_x, posizione_y, velocita_x, velocita_y);
        ins_punti.aggiungi_punto(punto);
        cout<<"Vuoi terminare l'inserimento di punti?"<<endl;
        while(rimani2 == true){
            cout<<"Digita Yes per continuare, No per proseguire: ";
            cin>>risposta;
            if(risposta == "Yes"){
                rimani = false;
                rimani2 = false;
            }else{
                if(risposta == "No"){
                    rimani = true;
                    rimani2 = false;
                }else{
                    cout<<"Comando non valido"<<endl;
                    rimani2 = true;
                }
            }
        }
    }
    bool rimani3 = true;
    int tempo;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani3 == true){
        cout<<"VISUALIZZA I PUNTI (1), MUOVI (2), ENERGIA CINETICA TOTALE (3), QUANTITA DI MOTO TOTALE (4), TERMINA (5): ";
        cin>>operazione;
        switch(operazione){
            case 1:
            ins_punti.visualizza();
            break;
            case 2 :
            cout<<"Di quanto tempo vuoi fare avanzare l'insieme dei punti? ";
            cin>>tempo;
            ins_punti.muovi(tempo);
            break;
            case 3 :
            cout<<"L'energia cinetica totale del sistema di punti equivale a : "<<ins_punti.energia_cinetica()<<" N"<<endl;
            break;
            case 4 :
            cout<<"La quantita totale del sistema di punti equivale a : "<<ins_punti.quantita_moto()<<" mv/s"<<endl;
            break;
            case 5 :
            rimani3 = false;
            break;
            default :
            cout<<"Comando non valido "<<endl;
        }
    }
}