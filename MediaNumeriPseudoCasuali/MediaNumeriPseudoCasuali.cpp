#include<iostream>
#include<random>
#include<cmath>
#include<vector>
using namespace std; 

mt19937 gen;

int main(){
    int n;
    random_device rd;
    gen.seed(rd());
    normal_distribution <double> dis(6,0.1);
    //Distribuzione di tipo Poissoniano
    //poisson_distribution <int> dis(4);
    cout<<"Quanti numeri vuoi estrapolare? ";
    cin>>n;
    vector<double> v(n);
    for(int i=0;i<v.size();i++){
        v[i]=dis(gen);
    }
    cout<<"I numeri ottenuto sono: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    double somma=0;
    for(int i=0;i<v.size();i++){
        somma=somma+v[i];
    }
    double media=somma/v.size();
    double somma2=0;
    for(int i=0;i<v.size();i++){
        somma2=somma2+pow(v[i]-media,2);
    }
    cout<<"La media dei valori ottenuti equivale a "<<media<<" mentre la varianza ottenuta e' "<<somma2/v.size()<<endl;
}
