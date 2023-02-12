#include<iostream>
#include<random>

using namespace std;

mt19937 gen;

int somma_2_dadi(){
    uniform_int_distribution<int> dado(1,6);
    int d1=dado(gen), d2=dado(gen);
    return d1+d2;
}
int main(){
    random_device rd;
    cout<<"Inserisci un numero ";
    unsigned int seme;
    cin>>seme;
    gen.seed(seme);
    for(int i=1;i<=10;i++){
        int risultato = somma_2_dadi();
        cout<<"La somma tra i due dadi e' "<<risultato<<endl;
    }
}