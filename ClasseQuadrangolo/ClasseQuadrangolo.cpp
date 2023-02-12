#include<iostream>
using namespace std;

class Quadrangolo{
    private:
    double x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
    public:
    Quadrangolo(){
        //Quadrangolo degenere con tutti i vertici nell'origine
        x_1 = 0;
        y_1 = 0;
        x_2 = 0;
        y_2 = 0;
        x_3 = 0;
        y_3 = 0;
        x_4 = 0;
        y_4 = 0;
    }
    Quadrangolo(double _x_1, double _y_1, double _x_2, double _y_2, double _x_3, double _y_3, double _x_4, double _y_4){
        //Crea quadrangolo con i vertici inseriti come parametri
        x_1 = _x_1;
        y_1 = _y_1;
        x_2 = _x_2;
        y_2 = _y_2;
        x_3 = _x_3;
        y_3 = _y_3;
        x_4 = _x_4;
        y_4 = _y_4;
    }
    double perimetro(){
        double lato_1 = abs(x_1 - x_2);
        double lato_2 = abs(y_2 - y_3);
        double lato_3 = abs(x_3 - x_4);
        double lato_4 = abs(y_4 - y_1);
        double perim = lato_1 + lato_2 + lato_3 + lato_4;
        return perim;
    }
    void trasla(double deltax, double deltay){
        x_1 = x_1 + deltax;
        y_1 = y_1 + deltay;
        x_2 = x_2 + deltax;
        y_2 = y_2 + deltay;
        x_3 = x_3 + deltax;
        y_3 = y_3 + deltay;
        x_4 = x_4 + deltax;
        y_4 = y_4 + deltay;
    }
    void ruota();
    friend ostream& operator<< (ostream& os, const Quadrangolo& _quadrangolo){
        os << "Il vertice in alto a destra si trova alle coordinate ( ";
        os << _quadrangolo.x_1;
        os <<" , ";
        os << _quadrangolo.y_1;
        os <<" )"<<endl;
        os << "Il vertice in alto a sinistra si trova alle coordinate ( ";
        os << _quadrangolo.x_2;
        os <<" , ";
        os << _quadrangolo.y_2;
        os <<" )"<<endl;
        os << "Il vertice in basso a destra si trova alle coordinate ( ";
        os << _quadrangolo.x_3;
        os <<" , ";
        os << _quadrangolo.y_3;
        os <<" )"<<endl;
        os << "Il vertice in basso a sinistra si trova alle coordinate ( ";
        os << _quadrangolo.x_4;
        os <<" , ";
        os << _quadrangolo.y_4;
        os <<" )"<<endl;
        return os;
    }
};

int main(){
    int operazione;
    bool rimani_2 = true;
    string risposta;
    double _x_1, _y_1, _x_2, _y_2, _x_3, _y_3, _x_4, _y_4, deltax, deltay;
    cout<<"SIMULATORE DI QUADRANGOLI"<<endl;
    while(rimani_2 == true){
        cout<<"Crea il quadrangolo"<<endl;
        cout<<"Inserisci il primo vertice: "<<endl;
        cout<<"X: ";
        cin>>_x_1;
        cout<<"Y: ";
        cin>>_y_1;
        cout<<"Inserisci il secondo vertice: "<<endl;
        cout<<"X: ";
        cin>>_x_2;
        cout<<"Y: ";
        cin>>_y_2;
        cout<<"Inserisci il terzo vertice: "<<endl;
        cout<<"X: ";
        cin>>_x_3;
        cout<<"Y: ";
        cin>>_y_3;
        cout<<"Inserisci l'ultimo vertice: "<<endl;
        cout<<"X: ";
        cin>>_x_4;
        cout<<"Y: ";
        cin>>_y_4;
        Quadrangolo _quadrangolo(_x_1, _y_1, _x_2, _y_2, _x_3, _y_3, _x_4, _y_4);
        cout << _quadrangolo;
        cout<<"Seleziona l'operazione che vuoi eseguire"<<endl;
        bool rimani = true;
        while(rimani == true){
            cout<<"Perimetro (1), Trasla (2), Ruota (3), Termina (4): ";
            cin>>operazione;
            switch(operazione){
                case 1 :
                cout<<"Il perimetro del quadrangolo creato vale: "<<_quadrangolo.perimetro()<<endl;
                break;
                case 2 :
                cout<<"Traslazione sulle X: ";
                cin>>deltax;
                cout<<"Traslazione sulle Y: ";
                cin>>deltay;
                _quadrangolo.trasla(deltax, deltay);
                cout<<"Il quadrangolo si e' spostato di "<<deltax<<" unita sulle x e "<<deltay<<" unita sulle y"<<endl;
                cout<<_quadrangolo;
                break;
                case 3 :
                cout<<"Non fa niente per ora!"<<endl;
                //_quadrangolo.ruota();
                break;
                case 4 : 
                rimani = false;
                break;
                default :
                cout<<"Comando non valido"<<endl;
            }
        }
        bool rimani_3 = true;
        cout<<"Vuoi terminare o vuoi creare un nuovo quadrangolo?"<<endl;
        cout<<"(Yes) Creazione di un nuovo quadrangolo, (No) Terminazione del programma: ";
        while(rimani_3 == true){
            cin>>risposta;
            if(risposta == "Yes"){
                rimani_3 = false;
                rimani_2 = true;
            }else{
                if(risposta == "No"){
                    rimani_3 = false;
                    rimani_2 = false;
                }else{
                    cout<<"Comando non valido"<<endl;
                    rimani_3 = true;
                    rimani_2 = true;
                }
            }
        }
    }
}