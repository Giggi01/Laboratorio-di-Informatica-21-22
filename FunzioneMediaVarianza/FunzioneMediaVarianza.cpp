#include<iostream>
#include<cmath>
using namespace std;

#define N 3

struct Dati{
    double a;
    double b;
};

Dati medvar(double c[]){
    double somma=0;
    for(int i=0;i<N;i++){
        somma=somma+c[i];
    }
    double media=somma/N;
    double somma2=0;
    for(int i=0;i<N;i++){
        somma2=somma2+pow(c[i]-media,2);
    }
    double var=somma2/N;
    Dati dati={media,var};
    return dati;
}


int main(){
    double a[N];
    cout<<"Inserisci i "<<N<<" numeri ";
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cout<<"L'array ha i seguenti valori: ";
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    Dati mediavarianza=medvar(a);
    cout<<"La media degli "<<N<<" numeri vale "<<mediavarianza.a<<endl;
    cout<<"La varianza degli "<<N<<" numeri vale "<<mediavarianza.b<<endl;

}