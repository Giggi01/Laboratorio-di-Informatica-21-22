#include<iostream>
#include<cmath>
using namespace std;

#define N 3

int main(){
    int massimo=-2147483648;
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
    cout<<"Il numero massimo in valore assoluto equivale a: "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            //cout<<a[i][j];
            if(abs(a[i][j])>massimo){
                massimo=abs(a[i][j]);
            }
        }
        //cout<<endl;
    }
    cout<<massimo<<endl;
}