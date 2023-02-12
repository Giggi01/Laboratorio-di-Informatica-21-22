#include<iostream>
#include<cmath>
using namespace std;

#define N 5

int main(){
    int f=0;
    double minimo=2147483647;
    double u[N];
    cout<<"Inserisci gli elementi dell'array "<<endl;
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"L'array ha i seguenti valori: ";
    for(int i=0;i<N;i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        if(u[i]<minimo){
        minimo=u[i];
        f=i;
        }
    }
    cout<<"Il valore piu piccolo e': "<<minimo<<" e si trova alla posizione "<<f+1<<endl;
    

}