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

double mediapesata(const vector<double>&v, const vector<double>&u){
    double somma=0;
    double pesi=0;
    if(u.size()!=v.size()){
        somma=0;
        pesi=1;
    }else{
        for(unsigned int i=0;i<v.size();i++){
            somma=somma+(v[i]*u[i]);
        }
        for(unsigned int i=0;i<u.size();i++){
            pesi=pesi+u[i];
        }
    }
    return somma/pesi;
}

int main(){
    vector<double> vett1;
    vector<double> vett2;
    leggivector(vett1);
    cout<<"I valori del primo vector sono ";
    scrivivector(vett1);
    leggivector(vett2);
    cout<<"I valori del secondo vector sono ";
    scrivivector(vett2);
    cout<<"La media pesata dei due vector e' "<<mediapesata(vett1,vett2);
}