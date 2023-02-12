#include<iostream>
#include<cmath>
using namespace std; 

int main(){
    int h,w;
    cout<<"Inserisci l'altezza ";
    cin>>h;
    cout<<endl;
    cout<<"Inserisci la lunghezza ";
    cin>>w;
    cout<<endl;
    for (int k=1;k<=h;k++){
        int valore=k;
        if (valore==1||valore==h){
            for(int i=1;i<=w;i++){
                cout<<"*";
            }
            cout<<endl;
            }else{
                for(int s=1;s<=w;s++){
                    int valore2=s;
                    if(valore2==1||valore2==w){
                        cout<<"*";
                    }else{
                        for(int j=2;j<=w-1;j++){
                        cout<<" ";
                        }
                    }  
                }
            }
        }   
    }
