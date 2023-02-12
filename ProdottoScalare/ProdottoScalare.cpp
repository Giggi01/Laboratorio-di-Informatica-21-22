#include<iostream>
#include<cmath>
using namespace std;

#define N 5

int main(){
    double u[N], v[N];
    cout<<"Inserisci gli elementi del primo vettore ";
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"Inserisci gli elementi del secondo vettore ";
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    double w[N];
    for(int i=0;i<N;i++){
        w[i]=u[i]*v[i];    
    }
    cout<<endl;
    double somma=0;
    for(int i=0;i<N;i++){
        somma=somma+w[i];
    }
    cout<<"Il prodotto scalare tra i due vettori vale "<<somma<<endl;
}
