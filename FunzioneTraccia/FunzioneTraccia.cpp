#include<iostream>
#include<cmath>
using namespace std;

#define N 3

double track(double a[N][N]){
    double somma=0; 
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                somma=somma+a[i][j];
                cout<<somma<<endl;
            }
        }
    }
    return somma;
}
int main(){
double a[N][N];
    cout<<"Inserisci gli elementi della matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        cin>>a[i][j];
        }
    }
    cout<<"La matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    double traccia=track(a);
    cout<<"La traccia della matrice vale "<<traccia<<endl;
}