#include<iostream>
#include<cmath>
using namespace std;

#define N 2
#define M 3

int main(){
    double a[N][M];
    cout<<"Inserisci gli elementi della prima matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
        cin>>a[i][j];
        }
    }
    cout<<"La prima matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}