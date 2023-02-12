#include<iostream>
#include<cmath>
using namespace std;

double prodottointerno(int n, int k){
    double prodotto=1;
    for(int i=k;i<=n;i++){
        prodotto=prodotto*i;
    }
    return prodotto;
}
int coefficientebinomiale(int n, int k){
    long long int f1=prodottointerno(n,1);
    long long int f2=prodottointerno(k,1);
    long long int f3=prodottointerno(n-k,1);
    return f1/(f2*f3);
}
int main(){
    int n,k;
    cout<<"Inserisci n ";
    cin>>n;
    cout<<"Inserisci k ";
    cin>>k;
    double prodottoint=prodottointerno(n,k);
    int coefficiente=coefficientebinomiale(n,k);
    cout<<"Il prodotto interno tra "<<k<<" e "<<n<<" vale "<<prodottoint<<endl;
    cout<<"Il coefficiente binomiale di "<<n<<" su "<<k<<" vale "<<coefficiente;
}
