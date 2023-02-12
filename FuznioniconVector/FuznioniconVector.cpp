#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

void leggivector (vector<double>&v){
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        double x;
        cin>>x;
        v.push_back(x);
    }
}

void scrivivector(const vector<double>&v){
    for(unsigned int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

double mediavector(const vector<double>&v){
    double somma=0;
    for(unsigned int i=0;i<v.size();i++){
        somma=somma+v[i];
    }
    return somma/v.size();
}

double varianzavector(const vector<double>&v){
    double somma=0;
    for(unsigned int i=0;i<v.size();i++){
        somma=somma+v[i];
    }
    double media=somma/v.size();
    double somma2=0;
    for(unsigned int i=0;i<v.size();i++){
        somma2=somma2+pow(v[i]-media,2);
    }
    return somma2/v.size();
}

int main(){
    vector<double> vett;
    leggivector(vett);
    cout<<"I valori del vector sono ";
    scrivivector(vett);
    cout<<"La media vale "<<mediavector(vett);
    cout<<endl;
    cout<<"La varianza vale "<<varianzavector(vett);
}