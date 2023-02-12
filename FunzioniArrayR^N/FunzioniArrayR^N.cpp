#include<iostream>
#include<cmath>
using namespace std;

#define N 5

void leggi(double a[]){
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
}

void scrivi(double a[]){
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
}

double prodottoscalare(double a[],double b[]){
    double c[N];
    for(int i=0;i<N;i++){
        c[i]=a[i]*b[i];
    }
    double prodscal=0;
    for(int i=0;i<N;i++){
        prodscal=prodscal+c[i];
    }
    return prodscal;
}

void combinazionelineare(double a[],double alpha,double b[],double beta,double c[]){
    for(int i=0;i<N;i++){
        c[i]=alpha*a[i]+beta*b[i];
    }
}

int main(){
    double a[N], b[N], c[N];
    cout<<"Inserisci gli elementi dei due array ";
    leggi(a);
    leggi(b);
    cout<<"La prima array contiene ";
    scrivi(a);
    cout<<endl;
    cout<<"La seconda array contiene ";
    scrivi(b);
    cout<<endl;
    cout<<"Il prodotto scalare fra i due array vale "<<prodottoscalare(a,b)<<endl;
    combinazionelineare(a,4,b,3,c);
    cout<<"La combinazione lineare tra il primo e il secondo array vale ";
    scrivi(c);
}