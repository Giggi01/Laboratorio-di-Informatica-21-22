#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double numero;
    cout<<"Inserisci il numero:";
    cin>>numero;
    cout<<endl;
        if (numero>=1&&numero<=9){
            cout<<"Il numero di cifre del numero inserito e' 1."<<endl; 
        }else{
            if (numero>=10&&numero<=99){
                cout<<"Il numero di cifre del numero inserito e' 2."<<endl; 
            }else{
                if (numero>=100&numero<=999){
                    cout<<"Il numero di cifre del numero inserito e' 3."<<endl; 
                }else{
                    if (numero>=1000&numero<=9999){
                    cout<<"Il numero di cifre del numero inserito e' 4."<<endl; 
                }else{
                    cout<<"Il numero inserito non e' valido!"<<endl;
                }
            }
        }
    }
}




    


