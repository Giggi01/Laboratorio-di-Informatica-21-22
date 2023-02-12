#include<iostream>
#include<cmath>
using namespace std;

#define N 5

double media(double a[N]){
    double somma=0;
    for(int i=0;i<N;i++){
        somma=somma+a[i];
    }
    double m=somma/N;
    return m;
}
int main(){
    double a[N];
    cout<<"Inserisci i valori dell'array: ";
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cout<<"L'array ha i seguenti valori: ";
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    double media2=media(a);
    cout<<"La media dei valori dell'array vale "<<media2<<endl;
}