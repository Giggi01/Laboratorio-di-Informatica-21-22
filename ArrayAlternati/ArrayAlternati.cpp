#include<iostream>
#include<cmath>
using namespace std;

#define N 3
#define N2 6

int main(){
    double u[N],v[N],c[N2];
    cout<<"Inserisci gli elementi del primo vettore "<<endl;
    for(int i=1;i<=(N2-1);i+=2){
        cin>>u[i];
    }
    cout<<"Il primo vettore ha i seguenti valori "<<endl;
    for(int i=1;i<=(N2-1);i+=2){
        cout<<u[i]<<" ";
    }
    cout<<endl;
    cout<<"Inserisci gli elementi del secondo vettore "<<endl;
    for(int i=1;i<=(N2-1);i+=2){
        cin>>v[i];
    }
    cout<<"Il secondo vettore ha i seguenti valori "<<endl;
    for(int i=1;i<=(N2-1);i+=2){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Il terzo array vale ";
    int i;
    for(i=1;i<=(N2-1);i+=2){
        c[i]=u[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<=(N2-1);i+=2){
        c[i]=v[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<N2;i++){
        cout<<c[i]<<" ";
    }
}