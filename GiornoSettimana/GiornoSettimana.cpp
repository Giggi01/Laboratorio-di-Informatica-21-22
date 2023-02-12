#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int giorno, mese;
    cout<<"Inserisci il giorno dell'anno 2021: ";
    cin>>giorno;
    cout<<"Inserisci il mese dell'anno 2021: ";
    cin>>mese;
    int somma=0;
    int i;
    int giorni;
    if(giorno>28&&mese==2){
        cout<<"Il giorno inserito non e' valido"<<endl;
    }else{
        for (i=1;i<mese;i++){
            //cout<<i<<endl;
            if(i==2){
                giorni=28;
            }else{
                if(i==4||i==6||i==9||i==11){
                    giorni=30;
                }else{
                    if(i==1||i==3||i==5||i==7||i==8||i==10){
                        giorni=31;
                    }
                }
            }
            somma=somma+giorni;
            //cout<<somma<<endl;
        }
        int somma2=giorno+somma;
        //cout<<somma2<<endl;
        int resto=(somma2)%(7);
        //cout<<"Il resto e' "<<resto<<endl;
        if(resto==0){
            cout<<"Il giorno della settimana corrispondente alla data inserita e' giovedi."<<endl;
        }else{
            if(resto==1){
                cout<<"Il giorno della settimana corrispondente alla data inserita e' venerdi."<<endl;
            }else{
                if(resto==2){
                    cout<<"Il giorno della settimana corrispondente alla data inserita e' sabato."<<endl;
                }else{
                    if(resto==3){
                       cout<<"Il giorno della settimana corrispondente alla data inserita e' domenica."<<endl;  
                    }else{
                        if(resto==4){
                            cout<<"Il giorno della settimana corrispondente alla data inserita e' lunedi."<<endl;
                        }else{
                            if(resto==5){
                                cout<<"Il giorno della settimana corrispondente alla data inserita e' martedi."<<endl;
                            }else{
                                if(resto==6){
                                    cout<<"Il giorno della settimana corrispondente alla data inserita e' mercoledi."<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
