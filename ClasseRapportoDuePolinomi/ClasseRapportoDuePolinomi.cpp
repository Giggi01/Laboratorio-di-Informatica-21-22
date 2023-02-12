#include<iostream>
#include<cmath>
using namespace std;

class Funzione{
    private:
    double a, b, c, d, e;
    double  x;
    public:
    Funzione(){
        a=0;
        b=0;
        c=1;
        d=0;
        x=1;
    }
    Funzione(double _a, double _b, double _c, double _d){
        a=_a;
        b=_b;
        c=_c;
        d=_d;
    }
    friend ostream& operator << (ostream& os, const Funzione& frazione){
        os << frazione.a<<"x + "<< frazione.b <<" / "<<frazione.c<<"x + "<< + frazione.d<<endl;
        return os;
    }
    //friend Funzione operator * (Funzione& funz_1, double numero){
        //Funzione funz_1;
        
    //}
    friend Funzione operator + (const Funzione& funz_1, const Funzione& funz_2){
        Funzione funz_3;
        if((funz_1.c*funz_1.x+funz_1.d)==(funz_2.c*funz_2.x+funz_2.d)){
            funz_3.a = funz_1.a + funz_2.a;
            funz_3.b = funz_1.b + funz_2.b;
            funz_3.c = funz_1.c;
            funz_3.d = funz_1.d;
        }
        //}else{
            //if((funz_1.c*funz_1.x+funz_1.d)!=(funz_2.c*funz_2.x+funz_2.d)){
                //funz_3.c = funz_1.c*funz_2.c;               
            //}
        //}
        return funz_3;
    
    }
    double valuta(double punto){
        x = punto;
        if(c*x + d == 0 ){
            cout<<"La funzione non e' definita in quel punto ";
            return 0;
        }else{
            double risultato = 0;
            risultato = (a*x + b)/(c*x + d);
            return risultato;
        }
    }
};

int main(){
    bool rimani = true;
    double punto;
    int operazione;
    double a, b, c, d;
    cout<<"SIMULATORE DI FUNZIONE"<<endl;
    cout<<"Crea la funzione"<<endl;
    cout<<"Primo parametro: ";
    cin>>a;
    cout<<"Secondo parametro: ";
    cin>>b;
    cout<<"Terzo parametro: ";
    cin>>c;
    cout<<"Quarto parametro: ";
    cin>>d;
    Funzione funzione(a,b,c,d);
    cout<<"Crea la seconda funzione"<<endl;
    cout<<"Primo parametro: ";
    cin>>a;
    cout<<"Secondo parametro: ";
    cin>>b;
    cout<<"Terzo parametro: ";
    cin>>c;
    cout<<"Quarto parametro: ";
    cin>>d;
    Funzione funzione_2(a,b,c,d);
    Funzione funzione_3;
    cout<<"Scegli l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"VISUALIZZA (1), SOMMA (2), PRODOTTO CON SCALARE (3), VALUTA (4), TERMINA (5): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"La prima funzione e' la seguente: ";
            cout<<funzione;
            cout<<"La seconda funzione e' la seguente: ";
            cout<<funzione_2;
            break;
            case 2 :
            funzione_3 = funzione + funzione_2;
            cout<<funzione_3;
            case 4 :
            cout<<"In quale punto vuoi valutare la tua tua funzione: ";
            cin>>punto;
            cout<<"In quel punto la tua prima funzione vale : "<<funzione.valuta(punto)<<endl;
            break;
            case 5 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}