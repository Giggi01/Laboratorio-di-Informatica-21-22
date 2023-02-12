#include<iostream>
#include<cmath>
using namespace std;

#define N 4

int main(){
    double mat[N][N];
    cout<<"Inserisci gli elementi della prima matrice "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        cin>>mat[i][j];
        }
    }
    cout<<"La prima matrice ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    double v[N];
    for(int i=0;i<N;i++){
        v[i]=0;
        for(int j=0;j<N;j++){
        v[i]=v[i]+mat[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        cout<<v[i]<<" ";
    }

}