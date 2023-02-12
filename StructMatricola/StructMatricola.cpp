#include<iostream>
#include<cmath>
using namespace std;

#define N 3

int main(){
    unsigned int Matricola;
    bool numero=false;
    struct dati{
        unsigned int matricola;
        string nome;
        string cognome;
    };
    dati studenti[N];
    for(int i=0;i<N;i++){
        cout<<"Matricola"<<endl;
        cin>>studenti[i].matricola;
        cout<<"Nome"<<endl;
        cin>>studenti[i].nome;
        cout<<"Cognome"<<endl;
        cin>>studenti[i].cognome;
    }
    cout<<"Inserisci il numero di matricola ";
    cin>>Matricola;
    int i=0;
    while(i<N && numero==false){
        if(Matricola==studenti[i].matricola){
            i=Matricola;
            bool numero=true;
            break;          
        }else{
            i=i+1;
        }
    }
    if(numero=false){
        cout<<" Il numero di matricola inserito non e' corretto!"<<endl;
    }else{
        if(numero=true){
            cout<<"Dati matricola numero "<<i<<endl;
            cout<<studenti[i-1].nome<<endl;
            cout<<studenti[i-1].cognome<<endl;
        }
     }
}