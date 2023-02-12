#include<iostream>
#include<cmath>
using namespace std;

//Caso bidimensionale

class Punto{
    private:
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

int main(){
    int operazione;
    bool rimani = true;
    double massa;
    double posizione_x;
    double posizione_y;
    double velocita_x;
    double velocita_y;
    double tempo;
    //Punto point;
    cout<<"SIMULAZIONE PUNTO MATERIALE"<<endl;
    cout<<"CREA UN PUNTO  MATERIALE"<<endl;
    cout<<"MASSA: ";
    cin>>massa;
    cout<<"COMPONENTE DELLE X DELLA POSIZIONE: ";
    cin>>posizione_x;
    cout<<"COMPONENTE DELLE Y DELLA POSIZIONE: ";
    cin>>posizione_y;
    cout<<"COMPONENTE DELLE X DELLA VELOCITA: ";
    cin>>velocita_x;
    cout<<"COMPONENTE DELL EY DELLA VELOCITA: ";
    cin>>velocita_y;
    Punto point(massa, posizione_x, posizione_y, velocita_x, velocita_y);
    cout<<"SELEZIONA L'OPERAZIONE DA SVOLGERE: ";
    while(rimani == true){
        cout<<"CAMBIA VELOCITA (1), MUOVI(2), ENERGIA CINETICA (3), QUANTITA DI MOTO (4), VISUALIZZA (5), TERMINA (6) : ";
        cin>>operazione;
        switch(operazione){
            //case 1:
            //cout<<"Crea un punto materiale"<<endl;
            //cout<<"Massa: ";
            //cin>>massa;
            //cout<<"Componente x della posizione: ";
            //cin>>posizione_x;
            //cout<<"Componente y della posizione:: ";
            //cin>>posizione_y;
            //cout<<"Componente x della velocita: ";
            //cin>>velocita_x;
            //cout<<"Componente y della velocita:";
            //cin>>velocita_y;
            //point(massa, posizione_x, posizione_y, velocita_x, velocita_y);
            //break;
            case 1 :
            cout<<"Imposta una nuova velocita"<<endl;
            cout<<"Componente delle x: ";
            cin>>velocita_x;
            cout<<"Componente delle y: ";
            cin>>velocita_y;
            point.cambia_velocita(velocita_x, velocita_y);
            break;
            case 2 :
            cout<<"Inserisci il tempo di spostamento del punto materiale: ";
            cin>>tempo;
            point.muovi(tempo);
            break;
            case 3 :
            cout<<"L'energia cinetica del punto e' pari a : "<<point.energia_cinetica()<<endl;
            break;
            case 4 :
            cout<<"La quantita di moto acquisita dal punto e' pari a : "<<point.quantita_di_moto()<<endl;
            break;
            case 5 :
            point.visualizza();
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }

}
