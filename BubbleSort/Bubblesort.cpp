#include<iostream>
#include<cmath>
using namespace std;

void leggi(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void scrivi(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void ordina(int a[],int n){
    int b;
    int pos=0;
    for(int i=0;i<n-1;i++){
        for(int i=0;i<(n-1);i++){
            if(a[i]>a[i+1]){
                int b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
            }
        }
    }
}

int main(){
    int a[5]; 
    cout<<"Inserisci gli elementi dell'array "; 
    leggi(a,5);
    scrivi(a,5); 
    ordina(a,5);
    cout<<endl;
    cout<<"Gli elementi dell'array ordinato sono ";
    scrivi(a,5);   
}