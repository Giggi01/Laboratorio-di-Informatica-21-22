#include<iostream>
#include<cmath>
using namespace std;

#define N 2

int main(){
    double mat[N][N];
    cout<<"Inserisci gli elementi della matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        cin>>mat[i][j];
        }
    }
    cout<<"La matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    double u[N];
    cout<<"Inserisci gli elementi del vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"Il vettore ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        cout<<u[i]<<" ";
    }
    double v[N];
    int k;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            v[i]=0;
            for(k=0;k<N;k++){
                v[i]+=mat[i][k]*u[k];
            }           
        }
    }
    cout<<endl;
    cout<<"Il prodotto tra matrice e vettore vale ";
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
 