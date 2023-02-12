#include<iostream>
#include<cmath>
using namespace std;

#define N 2

int main(){
    double mat1[N][N];
    cout<<"Inserisci gli elementi della prima matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        cin>>mat1[i][j];
        }
    }
    cout<<"La prima matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
    double mat2[N][N];
    cout<<"Inserisci gli elementi della seconda matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        cin>>mat2[i][j];
        }
    }
    cout<<"La seconda matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat2[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    int k;
    double mat3[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            mat3[i][j]=0;
            for(k=0;k<N;k++){
                 mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"La matrice prodotto vale: "<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<mat3[i][j];
        }
        cout<<endl;
    }

}