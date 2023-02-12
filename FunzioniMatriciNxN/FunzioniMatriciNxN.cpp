#include<iostream>
#include<cmath>
using namespace std;

#define N 4

void leggi(double a[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>a[i][j];
        }
    }
}

void scrivi(double a[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void somma(double a[N][N],double b[N][N],double c[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void prodotto(double a[N][N],double b[N][N],double c[N][N]){
    int k;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            c[i][j]=0;
            for(k=0;k<N;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

int main(){
    double a[N][N],b[N][N],c[N][N];
    cout<<"Inserisci i valori della prima matrice ";
    leggi(a);
    cout<<"Inserisci i valori della seconda matrice ";
    leggi(b);
    cout<<"La prima matrice vale "<<endl;
    scrivi(a);
    cout<<"La seconda matrice vale "<<endl;
    scrivi(b);
    somma(a,b,c);
    cout<<"La somma tra la prima matrice e la seconda matrice vale "<<endl;
    scrivi(c);
    prodotto(a,b,c);
    cout<<"Il prodotto tra la prima matrice e la seconda matrice vale "<<endl;
    scrivi(c);
}