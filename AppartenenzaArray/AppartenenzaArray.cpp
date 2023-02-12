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

bool appartiene(int a[],int n,int x){
    bool belong=false;
    int i=0;
    while(i<n && belong==false){
        if(x==a[i]){
            belong=true;
        }else{
            i++;
        }
    }
    return belong;
}

int main(){
    int a[5];
    int x;
    cout<<"Inserisci x ";
    cin>>x;
    cout<<endl;
    cout<<"Inserisci gli elementi dell'array ";
    leggi(a,5);
    cout<<"Gli elementi dell'array sono ";
    scrivi(a,5);
    cout<<endl;
    if(appartiene(a,5,x)==true){
        cout<<"L'elemento x appartiene all'array"<<endl;
    }else{
        cout<<"L'elemento x non appartiene all'array"<<endl;
    }
} 
