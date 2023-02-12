#include<iostream>
#include<cmath>
using namespace std;

#define N 3 

int main(){
    struct puntomateriale{
        double x;
        double y;
        double z;
        double massa;
    };
    //array di "puntomateriale"
    puntomateriale a[N];
    cout<<"Inserisici i valori dei vari punti"<<endl;
    for(int i=1;i<(N+1);i++){
        cout<<"Punto "<<i<<endl;
        cout<<"Ascissa ";
        cin>>a[i].x;
        cout<<"Ordinata ";
        cin>>a[i].y;
        cout<<"Profondita' ";
        cin>>a[i].z;
        cout<<"Massa ";
        cin>>a[i].massa;
    }
    double xG=0,yG=0,zG=0,massaG=0;
    for(int i=0;i<N;i++){
        xG=xG+a[i].x*a[i].massa;
        yG=yG+a[i].y*a[i].massa;
        zG=zG+a[i].z*a[i].massa;
        massaG=massaG+a[i].massa;
    }
    double xf=xG/massaG;
    double yf=yG/massaG;
    double zf=zG/massaG;
    cout<<"Le coordinate del baricentro dei "<<N<<" punti e' ( "<<xf<<" , "<<yf<<" , "<<zf<<" )"<<endl;
}