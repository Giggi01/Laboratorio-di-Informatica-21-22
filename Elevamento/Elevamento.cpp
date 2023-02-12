#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Inserisci n:";
    cin>>n;
    cout<<endl;
    int contatore;
    for (int i=2;i<n;i++){
        double resto=n%i;
        double divisione=n/i;
        double divisori=divisione+resto;
        if (resto==0){
            contatore=divisori;
            cout<<"I divisori sono:"<<divisori<<endl;
        }
    }
}