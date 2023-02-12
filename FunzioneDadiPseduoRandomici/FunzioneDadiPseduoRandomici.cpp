#include<iostream>
#include<random>
using namespace std;

mt19937 gen;
 
double probabilita3dadi(int dim){
    uniform_int_distribution<int> dado(1,6);
    double successi=0;
    double lanci=0;
    double a[dim], b[dim], c[dim];
    for(int i=0;i<dim;i++){
        a[i]=dado(gen);
        b[i]=dado(gen);
        c[i]=dado(gen);
        lanci++;
        if(a[i]==b[i] || a[i]==c[i] || b[i]==c[i]){
            successi++;
        }
    }
    double probabilita=successi/lanci;
    return probabilita;
}
int main(){
    int seed;
    int dim;
    cout<<"Genera un seed: ";
    cin>>seed;
    gen.seed(seed);
    cout<<"Quante volte vuoi lanciare i 3 dadi? ";
    cin>>dim;
    double risultato = probabilita3dadi(dim);
    double risultato_teorico = (5.0)/(12.0);
    cout<<"Le probabilita sperimentali che 2 dadi su 3 escano con la faccia uguale esegueno "<<dim<<" lanci e' pari a "<<risultato<<" mentre a livello teorico corrisponde a "<<risultato_teorico<<endl;
}