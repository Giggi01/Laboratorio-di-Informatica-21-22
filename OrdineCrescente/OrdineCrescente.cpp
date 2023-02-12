#include<iostream>
#include<cmath>
using namespace std;
#define N 5

int main(){
    bool crescente=true;
    double a[N];
    cout<<"Inserisci gli elementi dell'array "<<endl;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cout<<"L'array ha i seguenti valori: ";
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<N-1;i++){
        if(a[i]>=a[i+1]){
            crescente=false;
            break;
        }
    }
    cout<<endl;
    if(crescente=false){
        cout<<"La sequenza non e' in ordine crescente"<<endl;
    }else{
        cout<<"La sequenza e' in ordine crescente"<<endl;
    }
}


