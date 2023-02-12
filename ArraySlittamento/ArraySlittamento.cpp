#include<iostream>
#include<cmath>
using namespace std;

#define N 7

int main(){
    double u[N],v[N];
    cout<<"Inserisci gli elementi del primo vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"Il primo vettore ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
    cout<<"Il secondo vettore ha i seguenti valori "<<endl;
    for(int i=N-1;i>=0;i-=N){
        v[i]=u[i];
        cout<<v[i]<<" "; 
    }
    for(int i=0;i<N-1;i++){
        v[i]=u[i];
        cout<<v[i]<<" ";
    }
}
    