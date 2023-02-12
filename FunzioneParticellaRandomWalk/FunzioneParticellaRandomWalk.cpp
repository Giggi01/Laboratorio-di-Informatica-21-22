#include<iostream>
#include<random>
#include<cmath>
using namespace std;

mt19937 gen;

int passiparticella(){
    int contapassi=0;
    int maxdistance=0;
    int posizione=0;
    bool esci=false;
    uniform_int_distribution<int> dis(1,2);
    while(esci==false){
        int spostamento=dis(gen);
        //cout<<spostamento<<endl; Mostra se esce 1 o 2 e vede se spostarsi a dx o sx
        contapassi=contapassi+1;
        if(spostamento==1){
            posizione=posizione+1;
        }else{
            if(spostamento==2){
                posizione=posizione-1;
            }
        }
        if(maxdistance<abs(posizione)){
            maxdistance=abs(posizione);
        }
        if(posizione==0){
            esci==true;
            break;
        }
    } 
    cout<<"La massima distanza raggiunta dalla particella e' "<<maxdistance<<endl;   
    return contapassi;
}


int main(){
    int seed;
    cout<<"Inserisci un seed: ";
    cin>>seed;
    gen.seed(seed);
    int passipar=passiparticella();
    cout<<"La particella e' tornata alla posizione iniziale dopo "<<passipar<<" passi"<<endl;
}