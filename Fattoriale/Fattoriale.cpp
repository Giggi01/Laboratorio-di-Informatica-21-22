#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    unsigned long long int prodotto=1;
    cout<<"Inserisci numero ";
    cin>>n;
    for (int i=1; i<=n;i++){
        prodotto=prodotto*i;
        cout<<prodotto<<endl;
        }
    cout<<"Il fattoriale di "<<n<<" e' "<<prodotto<<endl;
}