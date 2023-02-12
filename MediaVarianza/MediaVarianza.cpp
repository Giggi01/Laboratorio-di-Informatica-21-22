#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n;
    cout<<"Quanti sono i valori ";
    cin>>n;
    int valore;
    double somma=0;
    double somma_quadrati=0;
    cout<<"Inserisci i "<<n<<" valori ";
    for (unsigned int i=1;i<=n;i++){
        cin>>valore;
        somma=somma+valore;
        somma_quadrati=somma_quadrati+pow(valore,2);
    }
    cout<<somma<<endl;
    cout<<somma_quadrati<<endl;
    double media=somma/n;
    double varianza=(somma_quadrati/n)-pow(media,2);
    cout<<"La media e' "<<media<<endl;
    cout<<"La varianza e' "<<varianza<<endl;
}


