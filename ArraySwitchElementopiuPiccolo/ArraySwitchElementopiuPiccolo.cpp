#include<iostream>
#include<cmath>
using namespace std;

#define N 4

int main(){
    double a[N];
    int posmin=0;
    int minimo=2147483647;
    cout<<"Inserisci gli elementi dell'array "<<endl;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cout<<"L'array ha i seguenti valori: ";
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        posmin=posmin+1;    
        if(a[i]<minimo){
            minimo=a[i];
        }
    }
    a[posmin-1]=a[0];
    cout<<"La posizione del valore piu piccolo e' "<<posmin<<endl;
    cout<<"Il minimo elemento e' "<<minimo<<endl;
    cout<<"Il nuovo array e' ";
    cout<<minimo<<" ";
    for(int i=1;i<N;i++){
        cout<<a[i]<<" ";
    }
}