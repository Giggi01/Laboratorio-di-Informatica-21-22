#include<iostream>
#include<cmath>
using namespace std;

#define N 5

int main(){
    double u[N];
    cout<<"Inserisci gli elementi del vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>u[i];
    }
    cout<<"Il vettore ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
    double mat[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
            mat[i][j]=u[i];
            }else{
                mat[i][j]=0;
            }
        }
    }
    cout<<"La matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}