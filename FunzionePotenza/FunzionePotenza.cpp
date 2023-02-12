#include<iostream>
#include<cmath>
using namespace std;

double potenza(double a,double n){
    double somma=1;    
    if(n>=0){
        for(int i=0;i<n;i++){
            somma=somma*a;   
        }   
    }else{
            for(int i=n;i<0;i++){
            somma=somma*a; 
        }
        somma=1/somma;
    }
    return somma;
}
int main(){
    double x;
    double n;
    cout<<"Inserisci x ";
    cin>>x;
    cout<<"Inserisci n ";
    cin>>n;
    double potenzax=potenza(x,n);
    cout<<"La potenza di "<<x<<" elevato alla "<<n<<" e' "<<potenzax<<endl;
}