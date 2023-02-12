#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double gradi,n;
    cout<<"Inserisci l'angolo in gradi ";
    cin>>gradi;
    cout<<endl;
    cout<<"Inserisci l'ultimo termine dello sviluppo ";
    cin>>n;
    cout<<endl;
    double x=(gradi*M_PI)/(180);
    cout<<"L'angolo in radinati e' "<<x<<endl;
    int long long prodotto=1;
    double sviluppo=0;
    double formulaseno=sin(x);
    for (int i=0;i<=n-1;i++){
        for (int j=1;j<=2*i+1;j++){
            prodotto=prodotto*i;
        }
        sviluppo=sviluppo+((pow(-1,i))*(pow(x,2*i+1))/(prodotto));
    }
    cout<<"Il risultato dello sviluppo e' "<<sviluppo<<endl;
    cout<<"Il risultato teorico e' "<<formulaseno<<endl;
}