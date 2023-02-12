#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

void leggivector (vector<int>&v){
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}

void scrivivector(const vector<int>&v){
    for(unsigned int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int massimovalore(const vector<int>&v){
    int massimo=-2147483648;
    for(unsigned int i=0;i<v.size();i++){
        if(v[i]>massimo){
            massimo=v[i];
        }
    }
    return massimo;
}

int main(){
    vector<int> vett;
    leggivector(vett);
    cout<<"I valori del vector sono ";
    scrivivector(vett);
    cout<<"Il valore piu grande del vector e' "<<massimovalore(vett);
}  
