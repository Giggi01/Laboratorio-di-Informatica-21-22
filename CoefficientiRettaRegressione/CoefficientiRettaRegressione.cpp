#include<iostream>
#include<cmath>
using namespace std;

#define N 4

int main(){
    double x[N],y[N];
    double somma1=0;
    cout<<"Inserisci gli elementi del primo vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>x[i];
    }
    cout<<"Il primo vettore ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<"Inserisci gli elementi del secondo vettore "<<endl;
    for(int i=0;i<N;i++){
        cin>>y[i];
    }
    cout<<"Il secondo vettore ha i seguenti valori "<<endl;
    for(int i=0;i<N;i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        somma1=somma1+(x[i]+y[i]);
    }
    double primomembro=somma1/N;
    //cout<<primomembro<<endl;
    double somma2=0;
    for(int i=0;i<N;i++){
        somma2=somma2+x[i];
    }
    double mediax=somma2/N;
    //cout<<mediax<<endl;
    double somma3=0;
    for(int i=0;i<N;i++){
        somma3=somma3+y[i];
    }
    double mediay=somma3/N;
    //cout<<mediay<<endl;
    double somma4=0;
    for(int i=0;i<N;i++){
        somma4=somma4+pow(x[i],2);
    }
    double secondomembro=somma4/N;
    //cout<<secondomembro<<endl;
    double b=(primomembro-(mediax*mediay))/(secondomembro-(pow(mediax,2)));
    cout<<"Il primo coefficiente di regressione e' "<<b<<endl;
    double a=mediay-(b*mediax);
    cout<<"Il secondo coefficiente di regressione e' "<<a<<endl;
}