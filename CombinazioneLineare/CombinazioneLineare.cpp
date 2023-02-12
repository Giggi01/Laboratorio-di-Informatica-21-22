#include<iostream>
#include<cmath>
using namespace std;

#define N 3

int main(){
    double a,b;
    cout<<"Inserisci i due numeri a e b "<<endl;
    cin>>a;
    cin>>b;
    double u[N],v[N];
    cout<<"Inserisci i valori del primo vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"Inserisci i valori del secondo vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    cout<<"Il valore del primo vettore e': ";
     for(int i=0;i<N;i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
    cout<<"Il valore del secondo vettore e': ";
     for(int i=0;i<N;i++){
        cout<<v[i]<<" ";
    } 
    //cout<<endl;
    for(int i=0;i<N;i++){
        u[i]=u[i]*2;
    }
    //for(int i=0;i<N;i++){
        //cout<<u[i]<<" ";
    //}
     for(int i=0;i<N;i++){
        v[i]=v[i]*2;
    }
    //cout<<endl;
    //for(int i=0;i<N;i++){
        //cout<<v[i]<<" ";
    //}
    double comblin[N];
    for(int i=0;i<N;i++){
        comblin[i]=u[i]+v[i];
    }
    cout<<endl;
    cout<<"La combinazione lineare tra u e v vale ";
    for(int i=0;i<N;i++){
        cout<<comblin[i]<<" ";
    }
}