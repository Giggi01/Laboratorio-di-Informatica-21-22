#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Funz_Trig{
    private: 
    double A;
    double B;
    double Omega;
    public:
    Funz_Trig(double a, double b, double omega){
        A = a;
        B = b;
        Omega = omega;
    }
    Funz_Trig(){
        A = 0;
        B = 0;
    }
    friend ostream& operator << (ostream& os, const Funz_Trig& funz){
        os << "La funzione trigonometrica vale "<<endl;
        os << funz.A <<"cos("<<funz.Omega<<"t)"<<" + "<<funz.B <<"sin("<<funz.Omega<<"t)"<<endl;
        return os;
    }
    //friend Funz_Trig operator * (const Funz_Trig& funz, double num_re){
        //funz.A = funz.A * num_re;
        //funz.B = funz.B * num_re;
        //return funz;
    //}
    double integrale(double s, double d);
    void valutazione(vector<double> x, vector<double> &f, vector<double> &f1){
        double funz;
        double funz_1;
        for(int i = 0 ; i < x.size(); i ++){
            funz = A*cos(Omega*x[i])+B*sin(Omega*x[i]);
            f.push_back(funz);
            funz_1 = Omega*(B+cos(x[i]*Omega))- A*sin(x[i]*Omega);
            f1.push_back(funz_1);
        }
        cout<<"Elenco della funzione valutata nei vari punti: "<<endl;
        for(int i = 0 ; i < f.size(); i ++){
            cout<<"- "<<f[i]<<endl;
        }
        cout<<"Elenco della funziona derivata valutata nei vari punti: "<<endl;
        for(int i = 0 ; i < f1.size(); i ++){
            cout<<"- "<<f1[i]<<endl;
        }
    }
};

int main(){
    bool rimani = true;
    int operazione;
    double a , b , omega, num_re;
    vector<double> x;
    double punti;
    vector<double> f;
    vector<double> f1;
    cout<<"Inserisci il parametro A: ";
    cin>>a;
    cout<<"Inserisci il parametro B: ";
    cin>>b;
    cout<<"Inserisci il parametro Omega: ";
    cin>>omega;
    Funz_Trig funz(a, b, omega);
    Funz_Trig funz1;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"Operazione con numero reale (1), Visualizzazione della funzione (2), Intergale della funzione (3), Valutazione (4), Esci (5): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Scegli un numero reale"<<endl;
            cin>>num_re;
            //funz = funz * num_re;
            break;
            case 2 :
            cout << funz;
            break;
            case 3 :
            break;
            case 4 :
            cout<<"Inserisci i punti: ";
            for(int i = 0 ; i < x.size(); i ++){
                cin>>punti;
                x.push_back(punti);
            }
            funz.valutazione(x, f, f1);
            break;
            case 5 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}