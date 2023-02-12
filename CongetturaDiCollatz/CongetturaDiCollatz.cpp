#include<iostream>
#include<random>
using namespace std;

int main(){
    cout<<"Calcolo della successione 3n+1 per un numero randomico"<<endl;
    int numerosucc=27;
    cout<<numerosucc<<endl;
    while(numerosucc!=1){
        if(numerosucc%2==0){
            numerosucc = numerosucc/2;
            cout<<numerosucc<<endl;
        }else{
            if(numerosucc%2!=0){
                numerosucc = (numerosucc*3)+1;
                cout<<numerosucc<<endl;
            }
        }
    }
}