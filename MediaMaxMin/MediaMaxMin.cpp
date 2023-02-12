#include<iostream>
#include<cmath>
using namespace std;

int main(){
    unsigned int n;
    cout<<"Quanti sono i numeri ";
    cin>>n;
    cout<<"inserisci i "<<n<<" valori ";
    double valore;
    int massimo=-2147483648;
    int minimo=2147483647;
    double somma=0;
    for (unsigned int i=1;i<=n;i++){
        cin>> valore;
        somma=(somma+valore);
        if (valore>massimo){
            massimo=valore;
        }
        if(valore<minimo){
            minimo=valore;
        }   
    }
    cout<<"Il massimo e' "<<massimo<<endl;
    cout<<"Il minimo e' "<<minimo<<endl;
    double media=somma/n;
    cout<<"La media e' "<<media<<endl;
}
